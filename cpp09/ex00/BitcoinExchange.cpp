/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:17:18 by simarcha          #+#    #+#             */
/*   Updated: 2025/02/13 15:58:43 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//our map is <int, int>
//we have to convert the date into an int with as a reference 0 <=> 01/01/2009
int	convert_date_in_int(int day, int month, int year)
{
	int	ref;
	int	ref_year;
	int	ref_month;
	int	ref_day;
	int	bissextiles_days;

	ref_year = year - 2009;
	ref_month = month - 1;
	ref_day = day - 1;
	bissextiles_days = ref_year / 4;
	ref = ref_year * 365 + bissextiles_days + ref_month * 31 + ref_day;
	// std::cout << "ref: " << ref << std::endl;
	return (ref);
}

float	recover_value(const std::string &line)
{
	std::string nb_str = line.substr(11);
	return (atof(nb_str.c_str()));
}

void	BitcoinExchange::print_map()
{
	for (std::map<int, float>::const_iterator it = _map_csv.begin(); it != _map_csv.end(); ++it)
		std::cout << it->first << ": " << it->second << std::endl;
}

void	BitcoinExchange::convert_date_in_csv_into_map()
{
	std::ifstream	file("data.csv");
	std::string		string_day;
	int				day;
	std::string		string_month;
	int				month;
	std::string		string_year;
	int				year;
	int				i = 0;
	BitcoinExchange	bitcoin;

	if (!file)
	{
		std::cerr << "Impossible to open the data.csv file\n";
		return ;
	}
	std::string	line;
	// std::cout << "before getline csv\n";
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
	print_map();
	file.close();
}

// int		check_in_map_csv(int day, int month, int year)
// {
	
// }
