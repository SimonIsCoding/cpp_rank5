/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:51:51 by simon             #+#    #+#             */
/*   Updated: 2025/02/08 15:48:36 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}

Span::~Span()
{
}

Span::Span(unsigned int N) : _N(N)
{
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

void	Span::displayAllNumbers() const
{
	for (unsigned int i = 0; i < _vec.size(); i++)
		std::cout << _vec[i] << std::endl;
}

void	Span::addNumber()
{
	int	nb;

	srand(static_cast<unsigned int>(time(NULL)));
  	nb = rand();
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

void	Span::shortestSpan()
{
	
}

void	Span::longestSpan()
{
	
}
