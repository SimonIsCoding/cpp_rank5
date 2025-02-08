/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:15:03 by simon             #+#    #+#             */
/*   Updated: 2025/02/06 14:51:37 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
#define	SPAN_HPP

#include <iostream>

class Span
{
	private:
		unsigned int	_N;
	public:
		Span();
		Span(unsigned int N);
		Span(Span const& copy);
		Span const& operator=(Span const& copy);
		~Span();

		void	addNumber();
		void	shortestSpan();
		void	longestSpan();
};

#endif