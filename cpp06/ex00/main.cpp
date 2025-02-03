/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:06:18 by simarcha          #+#    #+#             */
/*   Updated: 2025/01/25 16:06:32 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
=======
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
>>>>>>> 0f3a0940b96e9f5773e34b898f8412d7d494f9f1
	return (0);
}