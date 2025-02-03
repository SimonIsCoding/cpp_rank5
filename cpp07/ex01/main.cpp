/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:42:53 by simarcha          #+#    #+#             */
/*   Updated: 2025/02/03 17:13:18 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	{
		std::cout << "Type int\n";
		int	array[10];
		for (int i = 0; i < 10; i++)
			array[i] = i;
		::iter(array, 10, ::print_value<int>);
	}
	{
		std::cout << "Type double\n";
		double	array[10];
		for (int i = 0; i < 10; i++)
			array[i] = i + 0.32;
		::iter(array, 10, ::print_value<double>);
	}
	{
		std::cout << "Type float\n";
		float	array[10];
		for (int i = 0; i < 10; i++)
			array[i] = i + 0.32;
		::iter(array, 10, ::print_value<float>);
	}
	{
		std::cout << "Type char\n";
		char	array[10];
		for (int i = 0; i < 10; i++)
			array[i] = i + 48;
		::iter(array, 10, ::print_value<char>);
	}
	return (0);
}