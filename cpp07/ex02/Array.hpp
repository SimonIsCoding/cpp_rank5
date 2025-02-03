/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:21:47 by simarcha          #+#    #+#             */
/*   Updated: 2025/02/03 19:36:15 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template < typename T> class Array
{
	private:
		T	_element;
	public:	
		Array();
		~Array();
		Array(unsigned int n);
		Array(Array const& copy);
		Array const& operator=(Array const& copy);
		void* operator new (std::size_t count);

		int	size(void) const;
};

Array::Array()
{
	
}

#endif