/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:46:54 by simon             #+#    #+#             */
/*   Updated: 2025/02/01 12:45:49 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define	SCALAR_CONVERTER_HPP

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <iomanip>

class	ScalarConverter
{
	private:

	public:
		ScalarConverter();
//		ScalarConverter(ScalarConverter const &copy);
//		ScalarConverter const& operator=(ScalarConverter const &copy);
		~ScalarConverter();

		static void	convert(std::string str);
};

#endif