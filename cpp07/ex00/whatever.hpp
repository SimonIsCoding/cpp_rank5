/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:30:32 by simarcha          #+#    #+#             */
/*   Updated: 2025/02/03 16:46:29 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template< typename T>
T	max(T const & x, T const & y)
{
	return (x >= y ? x : y);
}

template< typename T>
T	min(T const & x, T const & y)
{
	return (x <= y ? x : y);
}

template< typename T>
void	swap(T & x, T & y)
{
	T tmp;
	
	tmp = x;
	x = y;
	y = tmp;
}

#endif