/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:17:28 by simarcha          #+#    #+#             */
/*   Updated: 2025/02/12 12:08:32 by simon            ###   ########.fr       */
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
int	check_date(const std::string &line)
{
	if (line.length() < 10)
		return (false);
	for (int i = 0; i < 4; i++)
	{
        if (!std::isdigit(line[i]))
            return (false);
	}
	if (!std::isdigit(line[5]) || !std::isdigit(line[6]))
		return (false);
	if (!std::isdigit(line[8]) || !std::isdigit(line[9]))
		return (false);
	return (true);
}

int	check_file(const std::string &filename)
{
	std::ifstream file(filename.c_str());//convert the string into a file for getline
	std::string line;
	int line_nb = 0;
	while (std::getline(file, line))
	{
		line_nb++;
		std::cout << line_nb << ": " << line << std::endl;
		if (line_nb == 1)
			continue ;
		if (check_date(line) != 1)
		{
			file.close();
			std::cerr << "Date format ill written in the input file\n";
			return (0);
		}
	}
	file.close();
	return (1);
}

int	parsing(char *argv1)
{
	std::string filename = argv1;
	if (file_exists(filename) != 1)
	{
		std::cerr << "file doesn't exist\n";
		return (0);
	}
	if (check_file(filename) != 1)
		return (0);
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