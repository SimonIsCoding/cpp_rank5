/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:17:28 by simarcha          #+#    #+#             */
/*   Updated: 2025/02/15 19:29:37 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	std::map<int, float>	_map_csv;
	if (argc != 2)
	{
		std::cerr << "Error: could not open file.\n";
		return (1);
	}
	_map_csv = convert_date_in_csv_into_map(_map_csv);
	if (parsing_and_print_lines(argv[1], _map_csv) != 1)
		return (2);
	return (0);
}