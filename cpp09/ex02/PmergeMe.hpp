/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:09:49 by simon             #+#    #+#             */
/*   Updated: 2025/02/18 15:58:15 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
T parse_and_create_vector(char **argv)
{
	T container;
	typedef typename T::value_type type;
	int	i = 1;
	int	j;
	
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				std::cerr << "Error\n";
				exit(1);
			}
			j++;
		}
		// unsigned int nb = atoi(argv[i]);
		type nb = static_cast<type>(atoi(argv[i]));
		// container.push_back(nb);
		container.insert(container.end(), nb);
		i++;
	}
	return (container);
}

template <typename T>
void	print_container(const T &container)
{
	for (typename T::const_iterator it = container.begin(); it != container.end(); ++it)
	std::cout << *it << " ";
	std::cout << std::endl;
}

template <typename T>
void	split_container(const T &container, T &left, T &right)
{
	typename T::const_iterator mid = container.begin();
	left.insert(left.end(), container.begin(), mid);
	right.insert(right.end(), mid, container.end());
}

template <typename T>
T	merge_sort_algo(T &container)
{
	T	left;
	T	right;
	
	if (container.size() != 1)
		split_container(container, left, right);
		
}

#endif