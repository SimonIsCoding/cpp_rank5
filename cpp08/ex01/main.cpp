/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:05:49 by simon             #+#    #+#             */
/*   Updated: 2025/02/08 17:49:57 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	{
		Span	test(5);
		test.addNumber();
		test.addNumber();
		test.addNumber();
		test.addNumber();
		test.addNumber();
		test.addNumber();
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
		test.displayAllNumbers();
	}
	return (0);
}