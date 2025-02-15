/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:17:18 by simarcha          #+#    #+#             */
/*   Updated: 2025/02/15 19:40:59 by simon            ###   ########.fr       */
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
int	check_value(const std::string &line)
{
	float		fvalue;
	int			point;
	int			i;
	std::string	nb_str;

	if (line[10] != ' ' || line[11] != '|' || line[12] != ' ')
		return (2);
	i = 13;
	point = 0;
	if (!std::isdigit(line[13]))
		return (2);
	while (std::isdigit(line[i]) || line[i] == '.')
	{
		if (line[i] == '.')
			point++;
		if (point > 1)
			return (2);
		i++;
	}
	nb_str = line.substr(13, i - 13);
	fvalue = atof(nb_str.c_str());
	if (fvalue < 0)
		return (3);
	else if (fvalue > 1000)
		return (4);
	return (1);
}

void	print_bitcoin_value(std::string &line, std::map<int, float> _map_csv, int date_wanted)
{
	std::string	date_to_print;
	float		wallet;

	std::string nb_btc_str = line.substr(12);
	float nb_btc = atof(nb_btc_str.c_str());
	std::map<int, float>::iterator it = _map_csv.find(date_wanted);
	if (it == _map_csv.end())
	{
		it = _map_csv.lower_bound(date_wanted);
		it--;
	}
	wallet = it->second * nb_btc;
	std::cout << line.substr(0, 10) << " => " << nb_btc << " = " << wallet << std::endl;
}

int	check_file(const std::string &filename, std::map<int, float> _map_csv)
{
	std::ifstream file(filename.c_str());
	std::string line;
	int line_nb = 0;
	int	date_wanted;
	while (std::getline(file, line))
	{
		try
		{
			line_nb++;
			if (line_nb == 1)
				continue ;
			if (check_date(line) != 1)
				throw (IncorrectDate());
			else if (check_value(line) == 2)
				throw (BadInput());
			else if (check_value(line) == 3)
				throw (NotPositiveNumber());
			else if (check_value(line) == 4)
				throw (NumberTooLarge());
			std::string string_year = line.substr(0, 4);
			int year = atoi(string_year.c_str());
			std::string string_month = line.substr(5, 2);
			int month = atoi(string_month.c_str());
			std::string string_day = line.substr(8, 2);
			int day = atoi(string_day.c_str());
			date_wanted = convert_date_in_int(day, month, year);
			print_bitcoin_value(line, _map_csv, date_wanted);
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	file.close();
	return (1);
}

int	parsing_and_print_lines(char *argv1, std::map<int, float> _map_csv)
{
	std::string filename = argv1;
	if (file_exists(filename) != 1)
	{
		std::cerr << "file doesn't exist\n";
		return (0);
	}
	if (_map_csv[0] == -1)
		return (0);
	check_file(filename, _map_csv);
	return (1);
}

//PARSING ENDING

//our map is <int, int>
//we have to convert the date into an int with as a reference 0 <=> 01/01/2009
int	convert_date_in_int(int day, int month, int year)
{
	int	ref;
	int	ref_year;
	int	ref_month;
	int	ref_day;

	ref_year = year - 2009;
	ref_month = month;
	ref_day = day;
	ref = ref_year * 372 + ref_month * 31 + ref_day;
	return (ref);
}

float	recover_value(const std::string &line)
{
	std::string nb_str = line.substr(11);
	return (atof(nb_str.c_str()));
}

void	print_map(std::map<int, float>	_map_csv)
{
	for (std::map<int, float>::const_iterator it = _map_csv.begin(); it != _map_csv.end(); ++it)
		std::cout << it->first << ": " << it->second << std::endl;
}

std::map<int, float>	convert_date_in_csv_into_map(std::map<int, float> _map_csv)
{
	std::ifstream	file("data.csv");
	std::string		string_day;
	int				day;
	std::string		string_month;
	int				month;
	std::string		string_year;
	int				year;
	int				i = 0;

	if (!file)
	{
		std::cerr << "Impossible to open the data.csv file\n";
		_map_csv[0] = -1;
		return (_map_csv);
	}
	std::string	line;
	while (std::getline(file, line))
	{
		i++;
		if (i == 1)
			continue ;
		string_year = line.substr(0, 4);
		year = atoi(string_year.c_str());
		string_month = line.substr(5, 2);
		month = atoi(string_month.c_str());
		string_day = line.substr(8, 2);
		day = atoi(string_day.c_str());
		_map_csv[convert_date_in_int(day, month, year)] = recover_value(line);
	}
	file.close();
	return (_map_csv);
}


