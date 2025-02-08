/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:51:51 by simon             #+#    #+#             */
/*   Updated: 2025/02/06 15:05:21 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}

Span::~Span(){}

Span::Span(unsigned int N) : _N(N)
{}

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

		void	addNumber();
		void	shortestSpan();
		void	longestSpan();

void	Span::addNumber()
{
	
}
