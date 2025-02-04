/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:21:39 by simon             #+#    #+#             */
/*   Updated: 2025/02/04 14:40:42 by simarcha         ###   ########.fr       */
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