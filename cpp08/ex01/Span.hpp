/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:15:03 by simon             #+#    #+#             */
/*   Updated: 2025/02/15 20:53:32 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
#define	SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_vec;
	public:
		Span();
		Span(unsigned int N);
		Span(Span const& copy);
		Span const& operator=(Span const& copy);
		~Span();

		class TooManyNumbers: public std::exception
		{
			public:
				virtual const char *what(void) const throw() {return ("We can't add any numbers. We reached the maximum possible numbers stored");};
		};
		
		class NotEnoughNumbers: public std::exception
		{
			public:
				virtual const char *what(void) const throw() {return ("Not enough numbers to calculate the shortest/longest span");};
		};

		void	displayAllNumbers() const;

		void		addNumber(int nb);
		long		shortestSpan() const;
		long		longestSpan() const;
		void		fill_vector(unsigned int _N);
};

#endif