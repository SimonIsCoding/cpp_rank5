/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:17:28 by simarcha          #+#    #+#             */
/*   Updated: 2025/02/13 14:40:52 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
int	parsing(char *argv1);

int	main(int argc, char **argv)
{
	BitcoinExchange	bitcoin;

	if (argc != 2)
	{
		std::cerr << "Input should have a text file\n";
		return (1);
	}
	if (parsing(argv[1]) != 1)
		return (2);
	// std::cout << "before conver\n";
	bitcoin.convert_date_in_csv_into_map();
	return (0);
}