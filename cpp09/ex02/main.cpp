/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:22:15 by simon             #+#    #+#             */
/*   Updated: 2025/02/18 20:27:19 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <list>
#include <vector>

int	main(int argc, char** argv)
{
	if (argc == 1)
	{
		std::cerr << "Error\n";
		exit(1);
	}
	{
		struct timeval start, end;
		gettimeofday(&start, NULL);
		std::cout << "---With Vector---\n";
		std::vector<unsigned int> vec;
		vec = parse_and_create_container<std::vector<unsigned int> >(argv);
		std::cout << "Before: ";
		print_container(vec);
		vec = mergesort<std::vector<unsigned int> >(vec);
		std::cout << "After : ";
		print_container(vec);
		gettimeofday(&end, NULL);
		double time_taken;
		time_taken = (end.tv_sec - start.tv_sec) * 1e6;
		time_taken = (time_taken + (end.tv_usec - start.tv_usec)) * 1e-6;
		std::cout << "Time to process a range of " << vec.size() << " elements with std::[..] : " << time_taken << " us\n";
	}
	{
		struct timeval start, end;
		gettimeofday(&start, NULL);
		std::cout << "---With List---\n";
		std::list<unsigned int> lst;
		lst = parse_and_create_container<std::list<unsigned int> >(argv);
		std::cout << "Before: ";
		print_container(lst);
		lst = mergesort<std::list<unsigned int> >(lst);
		std::cout << "After : ";
		print_container(lst);
		gettimeofday(&end, NULL);
		double time_taken;
		time_taken = (end.tv_sec - start.tv_sec) * 1e6;
		time_taken = (time_taken + (end.tv_usec - start.tv_usec)) * 1e-6;
		std::cout << "Time to process a range of " << lst.size() << " elements with std::[..] : " << time_taken << " us\n";
	}
	return (0);
}