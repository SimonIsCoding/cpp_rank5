/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:22:15 by simon             #+#    #+#             */
/*   Updated: 2025/02/18 16:27:09 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<unsigned int> merge_sort_algo(std::vector<unsigned int> vec)
{
	std::vector<unsigned int>	left_part;
	std::vector<unsigned int>	right_part;
	std::vector<unsigned int>	sorted_vec;

	size_t mid = vec.size() / 2;
	left_part.assign(vec.begin(), vec.begin() + mid);
	right_part.assign(vec.begin() + mid, vec.end());
	while (left_part.size() > 1)
	{
		merge_sort_algo(left_part);
	}
	while (right_part.size() > 1)
	{
		merge_sort_algo(right_part);
	}
	if (right_part[0] < left_part[0])
	{
		sorted_vec.push_back(right_part[0]);
		right_part.pop_back();
	}
	else
	{
		sorted_vec.push_back(right_part[0]);
		right_part.pop_back();
	}
	return (sorted_vec);
}

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
		// vec = merge_sort_algo<std::vector<unsigned int> >(vec);
		vec = merge_sort_algo(vec);
		std::cout << "After: ";
		print_container(vec);
		// std::cout << "Time to process a range of " << vec.size() << " elements with std::[..] : " << TIME << " us\n";
	}
	{
		//same with list
	}
	return (0);
}