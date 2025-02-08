/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:51:51 by simon             #+#    #+#             */
/*   Updated: 2025/02/08 16:00:22 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

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

  	nb = rand() % 100;
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
	
}

int	Span::longestSpan()
{
	int	min = 2147483647;
	int	max = -2147483648;
	
	try
	{
		if (_vec.size() > 1)
		{
			for (int i = 0; i < _vec.size(); i++)
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
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	


}
