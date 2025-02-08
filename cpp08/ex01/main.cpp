/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:05:49 by simon             #+#    #+#             */
/*   Updated: 2025/02/08 17:24:22 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	/*{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}*/
	{
		Span	test(5);
		test.addNumber();
		test.addNumber();
		// test.addNumber();
		// test.addNumber();
		// test.addNumber();
		// test.addNumber();
		test.displayAllNumbers();
		try
		{
			std::cout << "longest span " << test.longestSpan() << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		test.displayAllNumbers();
	}
	return (0);
}