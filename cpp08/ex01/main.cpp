/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:05:49 by simon             #+#    #+#             */
/*   Updated: 2025/02/15 20:53:57 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int	main(void)
{
	srand(static_cast<unsigned int>(time(NULL)));
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "--------Second Test--------\n";
		Span sp = Span(2);
		sp.addNumber(-2147483648);
		sp.addNumber(2147483647);
		try
		{
			std::cout << "longest span : " << sp.longestSpan() << std::endl;
			std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "--------Third Test--------\n";
		Span sp = Span(2);
		sp.addNumber(2147483647);
		sp.addNumber(2147483647);
		try
		{
			std::cout << "longest span : " << sp.longestSpan() << std::endl;
			std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "--------Next Test--------\n";
		Span	test(5);
		int		nb;
		for (int i = 0; i < 5; i++)
		{
			nb = rand() % 1000;
			test.addNumber(nb);
		}
		test.displayAllNumbers();
		try
		{
			std::cout << "longest span : " << test.longestSpan() << std::endl;
			std::cout << "shortest span: " << test.shortestSpan() << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "--------Last Test--------\n";
		Span sp = Span(5);
		sp.fill_vector(10);
		sp.displayAllNumbers();
	}
	return (0);
}