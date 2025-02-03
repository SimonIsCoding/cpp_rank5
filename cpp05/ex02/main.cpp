/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:46:59 by simon             #+#    #+#             */
/*   Updated: 2025/01/22 18:39:08 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
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
	
	return (0);
}