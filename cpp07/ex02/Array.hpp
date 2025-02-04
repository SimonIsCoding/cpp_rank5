/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:21:47 by simarcha          #+#    #+#             */
/*   Updated: 2025/02/04 19:24:19 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdlib.h>

template < typename T> class Array
{
	private:
		T	*_array;
		int	_size;
	public:	
		Array();
		Array(unsigned int n);
		Array(Array const& copy);
		~Array();
		
		Array const&	operator=(const Array &copy);
		void*			operator new[] (std::size_t count);
		T&				operator[](int index);
		const T&		operator[](int index) const;

		int				size(void) const;
};

template <typename T>
T& Array<T>::operator[](int index)
{
	if (index < 0 || index >= _size)
		throw std::exception();

	return (_array[index]);
}

template <typename T>
const T& Array<T>::operator[](int index) const
{
	try
	{
		if (index < 0 || index >= _size)
		throw std::exception();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		// exit(1);
	}
	return (_array[index]);
}

template <typename T>
int	Array<T>::size(void) const
{
	return (_size);
}

template <typename T>
void*	Array<T>::operator new[](std::size_t count)
{
	std::cout << "new operator overloaded" << std::endl;
	void	*p = malloc(count);
	return (p);
}

template <typename T>
Array<T>::Array() : _size(0)
{
	_array = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	_array = new T[n];
}

template <typename T>
Array<T>::Array(const Array<T> &copy)
{
	if (this != &copy)
	{
		this->_size = copy._size;
		this->_array = new T[_size];
		for (int i; i < _size; i++)
			this->_array[i] = copy._array[i];
	}
}

template <typename T>
Array<T> const& Array<T>::operator=(Array<T> const& copy)
{
	if (this != &copy)
	{
		if (_array)
			delete (_array);
		this->_size = copy._size;
		this->_array = new T[_size];
		for (int i = 0; i < _size; i++)
			this->_array[i] = copy._array[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete _array;
}

#endif