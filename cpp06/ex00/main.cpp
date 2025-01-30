/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:21:39 by simon             #+#    #+#             */
/*   Updated: 2025/01/30 20:30:28 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char**argv)
{
	ScalarConverter	inp;
	std::string		input;
	
	if (argc != 2)
	{
		std::cerr << "2 arguments required to execute code\n";
		return (1);
	}
	input = std::string(argv[1]);
	std::cout << "_" << input << "_" << std::endl;
	inp.convert(input);
	return (0);
}