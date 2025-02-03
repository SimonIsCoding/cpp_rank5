/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:43:23 by simarcha          #+#    #+#             */
/*   Updated: 2025/02/03 17:06:53 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template< typename A, typename L, typename F>
void	iter(A *array, L len, F function)
{
	if (!array || !function)
	{
		std::cerr << "Wrong inputs given\n";
		return ;
	}
	for (int i = 0; i < len; i++)
	{
		function(array[i]) ;
	}
}

template< typename T>
void	print_value(T value)
{
	std::cout << value << std::endl;
}

#endif