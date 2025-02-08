/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:05:49 by simon             #+#    #+#             */
/*   Updated: 2025/02/08 15:47:23 by simarcha         ###   ########.fr       */
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
		test.addNumber();
		test.addNumber();
		test.addNumber();
		test.addNumber();
		test.displayAllNumbers();
	}
	// {
	// 	int		array[5] = {0};
	// 	int		len = sizeof(array) / sizeof(array[0]);
	// 	std::cout << "len array = " << len << std::endl;
	// 	for (int i = 0; i < 5; i++)
	// 		std::cout << array[i] << std::endl;
	// }
	return (0);
}