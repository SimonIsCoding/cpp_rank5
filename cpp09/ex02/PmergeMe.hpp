/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:09:49 by simon             #+#    #+#             */
/*   Updated: 2025/02/18 20:30:55 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <sys/time.h>

template <typename T>
T parse_and_create_container(char **argv)
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
		type nb = static_cast<type>(atoi(argv[i]));
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
T merge(T& a, T& b)
{
	T c;
	typename T::iterator it_a = a.begin();
	typename T::iterator it_b = b.begin();
	while (it_a != a.end() && it_b != b.end())
	{
		if (*it_a > *it_b)
		{
			c.push_back(*it_b);
			++it_b;
		}
		else
		{
			c.push_back(*it_a);
			++it_a;
		}
	}
	while (it_a != a.end())
	{
		c.push_back(*it_a);
		++it_a;
	}
	while (it_b != b.end())
	{
		c.push_back(*it_b);
		++it_b;
	}
	return c;
}

template <typename T>
T mergesort(T a)
{
	if (a.size() <= 1)
		return a;
	typename T::iterator mid = a.begin();
	size_t mid_index = a.size() / 2;
	for (size_t i = 0; i < mid_index; ++i)
		++mid;
	T left(a.begin(), mid);
	T right(mid, a.end());
	left = mergesort(left);
	right = mergesort(right);
	return merge(left, right);
}

#endif