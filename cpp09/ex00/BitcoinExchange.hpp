/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:15:21 by simarcha          #+#    #+#             */
/*   Updated: 2025/02/13 19:12:33 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cctype>
#include <map>
#include <string.h>
#include <algorithm>

class IncorrectDate: public std::exception
{
	public:
		virtual const char *what(void) const throw() {return ("Date Format not correct");}
};

class IncorrectValue: public std::exception
{
	public:
		virtual const char *what(void) const throw() {return ("Value Format not correct");}
};

void	convert_date_in_csv_into_map(std::map<int, float> _map_csv);
void	print_map(std::map<int, float> _map_csv);
void	print_bitcoin_value(std::string &line, std::map<int, float> _map_csv);
int		check_file(const std::string &filename, std::map<int, float> _map_csv);
int		parsing(char *argv1, std::map<int, float> _map_csv);

#endif