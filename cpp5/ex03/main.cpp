/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:46:59 by simon             #+#    #+#             */
/*   Updated: 2025/01/23 22:57:58 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

// int	main(void)
// {
// 	{
// 		Bureaucrat	Bender("Bender");
// 		Bender.setGrade(3);
// 		PresidentialPardonForm	Pact("Pact");

// 		Intern someRandomIntern;
// 		AForm* rrf;
// 		rrf = someRandomIntern.makeForm("Presidential", "Bender");
// 		delete rrf;
// 	}
// 	return (0);
// }

int	main(void)
{
	AForm *form1;

	try
	{
		std::cout << "_______TEST 1_______" << std::endl;
		Bureaucrat	test1("test1");
		test1.setGrade(150);
		// Bureaucrat	// test2("// test2", 1);

		std::cout << test1 << std::endl;
		// std::cout << // test2 << std::endl;

		Intern	someRandomIntern;

		form1 = someRandomIntern.makeForm("presidential pardin", "exampleForm1");
		std::cout << *form1 << std::endl;

		// test2.signForm(*form1);

		std::cout << *form1 << std::endl;

		// test2.executeForm(*form1);
		test1.executeForm(*form1);

		delete form1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}