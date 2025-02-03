/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:46:59 by simon             #+#    #+#             */
/*   Updated: 2025/01/24 19:55:08 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	{
		Bureaucrat	Bender("Bender");
		Bender.setGrade(3);
		PresidentialPardonForm	Pact("Pact");

		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("Presidential", "Bender");
		// std::cout << "rrf = " << rrf->getFormName() << std::endl;
		delete rrf;
	}
/*	{
		Bureaucrat	Boss("Boss");
		PresidentialPardonForm	Pact("Pact");
		RobotomyRequestForm		Robot("Robot");
		ShrubberyCreationForm	Shrub("Shrub");
		
		Boss.setGrade(1);
		
		std::cout << "--------------Boss Signing Forms--------------" << std::endl;
		Boss.executeForm(Pact);
		Boss.signForm(Pact);
		Pact.beSigned(Boss);
		Boss.executeForm(Pact);
		Boss.signForm(Robot);
		Robot.beSigned(Boss);
		Boss.executeForm(Robot);
		Boss.signForm(Shrub);
		Shrub.beSigned(Boss);
		Boss.executeForm(Shrub);
		std::cout << "--------------Boss going to sleep--------------" << std::endl;

		Bureaucrat	Civil_servant("Civil_servant");
		Civil_servant.setGrade(150);
		std::cout << "--------------Civil_servant Signing Forms--------------" << std::endl;
		Civil_servant.executeForm(Pact);
		Civil_servant.executeForm(Robot);
		Civil_servant.executeForm(Shrub);
		std::cout << "--------------Civil_servant going to sleep--------------" << std::endl;

		Bureaucrat	executive("executive");
		executive.setGrade(30);
		std::cout << "--------------Executive Signing Forms--------------" << std::endl;
		executive.executeForm(Pact);
		executive.executeForm(Robot);
		executive.executeForm(Shrub);
		std::cout << "--------------Executive going to sleep--------------" << std::endl;
	
	}*/
	return (0);
}

/*int	main(void)
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
}*/