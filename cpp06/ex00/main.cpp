/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:21:39 by simon             #+#    #+#             */
/*   Updated: 2025/02/01 15:08:05 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char**argv)
{
	std::string		input;
	
	if (argc != 2)
	{
		std::cerr << "2 arguments required to execute code\n";
		return (1);
	}
	input = std::string(argv[1]);
	ScalarConverter::convert(input);
	return (0);
}