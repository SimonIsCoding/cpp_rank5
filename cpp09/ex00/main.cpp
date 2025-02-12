/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:17:28 by simarcha          #+#    #+#             */
/*   Updated: 2025/02/12 17:44:36 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//PARSING BEGINNING
//function to check if the file exists
bool	file_exists(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	return (file.good());
}

//function to check if in the file, we have the "Date | Value" format
//si les dix premiers characters sont dans le bon format et que la value est un chiffre
//this function is used to check if the format is well written
//bien checker que le mois n'est pas superieure a 12 et que le jour n'est pas superieur a 31
bool	check_date(const std::string &line)
{
	std::string	string_day;
	int			day;
	std::string	string_month;
	int			month;

	if (line.length() < 10)
		return (false);
	for (int i = 0; i < 4; i++)
	{
		if (!std::isdigit(line[i]))
			return (false);
	}
	if (!std::isdigit(line[5]) || !std::isdigit(line[6]))
		return (false);
	string_month = line.substr(5, 2);
	month = atoi(string_month.c_str());
	if (month > 12 || month <= 0)
		return (false);
	if (!std::isdigit(line[8]) || !std::isdigit(line[9]))
		return (false);
	string_day = line.substr(8, 2);
	if (line[10] != ' ' || line[11] != '|' || line[12] != ' ')
		return (false);
	day = atoi(string_day.c_str());
	if (day > 31 || day <= 0)
		return (false);
	return (true);
}

//on veut checker si la value est bien un chiffre
// c'est-a-dire qu'apres le separateur, il y uniquement des numeros
//s'il y a des lettres, ce n'est pas un numero, => erreur
//or 							: " | 5"
bool	check_value(const std::string &line)
{
	float		fvalue;
	int			point;
	int			i;
	std::string	nb_str;

	i = 13;
	point = 0;
	if (!std::isdigit(line[13]))
		return (false);
	while (std::isdigit(line[i]) || line[i] == '.')
	{
		if (line[i] == '.')
			point++;
		if (point > 1)
			return (false);
		i++;
	}
	nb_str = line.substr(13, i - 13);
	fvalue = atof(nb_str.c_str());
	// std::cout << "fvalue: " << fvalue << std::endl;
	if (fvalue < 0 || fvalue > 1000)
		return (false);
	return (true);
}

int	check_file(const std::string &filename)
{
	std::ifstream file(filename.c_str());//convert the string into a file for getline
	std::string line;
	int line_nb = 0;
	// std::cout << "entered in check_file function\n";
	while (std::getline(file, line))
	{
		try
		{
			line_nb++;
			std::cout << line_nb << ": " << line << std::endl;
			if (line_nb == 1)
				continue ;
			if (check_date(line) != 1)
				throw (BitcoinExchange::IncorrectDate());
			else if (check_value(line) != 1)
				throw (BitcoinExchange::IncorrectValue());
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	file.close();
	return (1);
}

int	parsing(char *argv1)
{
	// std::cout << "entered in check_file function\n";
	std::string filename = argv1;
	if (file_exists(filename) != 1)
	{
		std::cerr << "file doesn't exist\n";
		return (0);
	}
	check_file(filename);
		// return (0);
	return (1);
}

//PARSING ENDING

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Input should have a text file\n";
		return (1);
	}
	if (parsing(argv[1]) != 1)
		return (2);
	return (0);
}