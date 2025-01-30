/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:46:54 by simon             #+#    #+#             */
/*   Updated: 2025/01/30 21:04:46 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_CPP
#define	SCALAR_CONVERTER_CPP

#include <iostream>
#include <string>

class	ScalarConverter
{
	private:

	public:
		ScalarConverter();
//		ScalarConverter(ScalarConverter const &copy);
//		ScalarConverter const& operator=(ScalarConverter const &copy);
		~ScalarConverter();

		int	convert(std::string str);
};

#endif