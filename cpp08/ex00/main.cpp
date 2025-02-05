/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:32:36 by simon             #+#    #+#             */
/*   Updated: 2025/02/05 15:55:12 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <map>
#include <vector>
#include <cstdlib>
#include <ctime> 

int	main(void)
{
	{
		std::list<int> lst1;
		lst1.push_back(1);
		lst1.push_back(2);
		lst1.push_back(2);
		lst1.push_back(3);
		lst1.push_back(2);
		lst1.push_back(2);
		lst1.push_back(2);
		int c = find_in_containers(lst1, 3);
		std::cout << "index of list c = " << c << std::endl;
	}
	{
		std::list<int> lst1;
		lst1.push_back(1);
		int c = find_in_containers(lst1, 3);
		std::cout << "index of list c = " << c << std::endl;
	}
	{
		std::vector<int> v1;
		v1.push_back(29);
		v1.push_back(31);
		v1.push_back(24);
		v1.push_back(33);
		v1.push_back(3);
		v1.push_back(6);
		int c = find_in_containers(v1, 3);
		std::cout << "index of vector c = " << c << std::endl;
	}
	return (0);
}