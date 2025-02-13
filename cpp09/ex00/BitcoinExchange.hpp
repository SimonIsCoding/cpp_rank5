/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:15:21 by simarcha          #+#    #+#             */
/*   Updated: 2025/02/13 15:57:25 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cctype>
#include <map>
#include <string.h>
#include <algorithm>

class	BitcoinExchange
{
	private:
		std::map<int, float>	_map_csv;
	
	public:
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

		void	convert_date_in_csv_into_map();
		void	print_map();

};

#endif