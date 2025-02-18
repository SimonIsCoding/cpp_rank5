/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:22:15 by simon             #+#    #+#             */
/*   Updated: 2025/02/18 14:18:19 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char** argv)
{
	{
		std::vector<unsigned int> vec;
		if (argc == 1)
		{
			std::cerr << "Error\n";
			exit(1);
		}
		vec = parse_and_create_vector<std::vector<unsigned int> >(argv);
		std::cout << "Before: ";
		print_container(vec);
		vec = merge_sort_algo<std::vector<unsigned int> >(vec);
		std::cout << "After: ";
		print_container(vec);
		// std::cout << "Time to process a range of " << vec.size() << " elements with std::[..] : " << TIME << " us\n";
	}
	{
		//same with list
	}
	return (0);
}