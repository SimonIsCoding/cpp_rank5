/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:15:21 by simarcha          #+#    #+#             */
/*   Updated: 2025/02/12 16:58:44 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
// #include <iomanip>
#include <stdlib.h>
#include <cctype>
#include <string.h>

class	BitcoinExchange
{
	private:
		
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

		



};

#endif