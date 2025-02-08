/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:15:03 by simon             #+#    #+#             */
/*   Updated: 2025/02/08 15:44:24 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
#define	SPAN_HPP

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime> 

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
				virtual const char *what(void) const throw();
		};

		void	displayAllNumbers() const;

		void	addNumber();
		void	shortestSpan();
		void	longestSpan();
};

#endif