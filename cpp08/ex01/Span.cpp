/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:51:51 by simon             #+#    #+#             */
/*   Updated: 2025/02/15 20:42:42 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

long	ft_abs(long nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

Span::Span(){}

Span::~Span()
{
}

Span::Span(unsigned int N) : _N(N)
{
	srand(static_cast<unsigned int>(time(NULL)));
}

Span::Span(Span const& copy)
{
	if (this != &copy)
	{
		this->_N = copy._N;
	}
}

Span const& Span::operator=(Span const& copy)
{
	if (this != &copy)
	{
		this->_N = copy._N;
	}
	return (*this);
}

void	Span::displayAllNumbers() const
{
	for (unsigned int i = 0; i < _vec.size(); i++)
		std::cout << _vec[i] << std::endl;
}

void	Span::addNumber(int nb)
{
	try
	{
		if (_vec.size() < _N)
			_vec.push_back(nb);
		else
			throw (Span::TooManyNumbers());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

long	Span::shortestSpan() const
{
	if (_vec.size() > 1)
	{
		long	shortest_span = 9223372036854775807;
		long	a;
		for (unsigned long i = 0; i < _vec.size(); i++)
		{
			a = _vec[i];
			for (unsigned long j = 0; j < _vec.size(); j++)
			{
				if (i == j)
					continue ;
				if (ft_abs(_vec[j] - a) < shortest_span)
					shortest_span = ft_abs(_vec[j] - a);
			}
		}
		return (shortest_span);
	}
	else
		throw (Span::NotEnoughNumbers());
}

long	Span::longestSpan() const
{
	long	min = 2147483647;
	long	max = -2147483648;

	if (_vec.size() > 1)
	{
		for (unsigned long i = 0; i < _vec.size(); i++)
		{
			if (_vec[i] < static_cast<int>(min))
				min = _vec[i];
			if (_vec[i] > static_cast<int>(max))
				max = _vec[i];
		}
		return (max - min);
	}
	else
		throw (Span::NotEnoughNumbers());
}