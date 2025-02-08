/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:51:51 by simon             #+#    #+#             */
/*   Updated: 2025/02/08 17:48:33 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	ft_abs(int nb)
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

const char *Span::TooManyNumbers::what() const throw()
{
	return ("We can't add any numbers. We reached the maximum possible numbers stored");
}

const char *Span::NotEnoughNumbers::what() const throw()
{
	return ("Not enough numbers to calculate the shortest/longest span");
}

void	Span::displayAllNumbers() const
{
	for (unsigned int i = 0; i < _vec.size(); i++)
		std::cout << _vec[i] << std::endl;
}

void	Span::addNumber()
{
	int	nb;

  	nb = rand() % 10;
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

int	Span::shortestSpan()
{
	if (_vec.size() > 1)
	{
		int	shortest_span = 2147483647;
		int	a;
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

int	Span::longestSpan()
{
	int	min = 2147483647;
	int	max = -2147483648;

	if (_vec.size() > 1)
	{
		for (unsigned long i = 0; i < _vec.size(); i++)
		{
			if (_vec[i] < min)
				min = _vec[i];
			if (_vec[i] > max)
				max = _vec[i];
		}
		return (max - min);
	}
	else
		throw (Span::NotEnoughNumbers());
}