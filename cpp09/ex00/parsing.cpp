/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:38:14 by simon             #+#    #+#             */
/*   Updated: 2025/02/13 19:17:24 by simon            ###   ########.fr       */
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

bool	check_correct_date(int day, int month, int year)
{
	int	month_30[4] = {4, 6, 9, 11};
	if (day == 31)
	{
		int	*it	= std::find(month_30, month_30 + 4, 11);
		int	index = (it == month_30 + 4) ? -1 : (it - month_30);
		if (index == -1)
			return (false);
	}
	if (month == 2)
	{
		if (day > 29)
			return (false);
		else if (day == 29 && year % 4 != 0)
			return (false);
	}
	return (true);
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
	std::string	string_year;
	int			year;

	for (int i = 0; i < 4; i++)
	{
		if (!std::isdigit(line[i]))
			return (false);
	}
	string_year = line.substr(0, 4);
	year = atoi(string_year.c_str());
	if (!std::isdigit(line[5]) || !std::isdigit(line[6]))
		return (false);
	string_month = line.substr(5, 2);
	month = atoi(string_month.c_str());
	if (month > 12 || month <= 0)
		return (false);
	if (!std::isdigit(line[8]) || !std::isdigit(line[9]))
		return (false);
	string_day = line.substr(8, 2);
	day = atoi(string_day.c_str());
	if (day > 31 || day <= 0)
		return (false);
	if (!check_correct_date(day, month, year))
		return (false);
	// check_in_map_csv(day, month, year);
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

	if (line[10] != ' ' || line[11] != '|' || line[12] != ' ')
		return (false);
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

void	print_bitcoin_value(std::string &line, std::map<int, float> _map_csv)
{
	//printer la date avec la line, recevoir la value du csv et la multiplier par la quantite de l'input.txt
}

int	check_file(const std::string &filename, std::map<int, float> _map_csv)
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
			// std::cout << line_nb << ": " << line << std::endl;
			if (line_nb == 1)
				continue ;
			if (check_date(line) != 1)
				throw (IncorrectDate());
			else if (check_value(line) != 1)
				throw (IncorrectValue());
			//ici il faudrait appeler la fonction pour imprimer les valeurs du btc
			print_bitcoin_value(line, _map_csv);
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	file.close();
	return (1);
}

int	parsing(char *argv1, std::map<int, float> _map_csv)
{
	std::string filename = argv1;
	if (file_exists(filename) != 1)
	{
		std::cerr << "file doesn't exist\n";
		return (0);
	}
	check_file(filename, _map_csv);
	return (1);
}

//PARSING ENDING