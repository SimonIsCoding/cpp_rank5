/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:24:21 by simon             #+#    #+#             */
/*   Updated: 2025/01/21 18:25:35 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	Boss("Boss");
	Boss.setGrade(1);
	Form	pact("Pact", 1, 1);
	std::cout << "Form " << pact.getFormName() << " has sign status as " << pact.getSignedStatus() << std::endl;
	std::cout << "Can the Bureaucrat " << Boss.getName() << " sign it ?" << std::endl;
	Boss.signForm(pact);
	pact.beSigned(Boss);
	std::cout << "Let's check: now Form " << pact.getFormName() << " has " << pact.getSignedStatus() << " as sign status" << std::endl;
	std::cout << std::endl;

	Bureaucrat	Civil_Servant("Civil_Servant");
	Civil_Servant.setGrade(150);
	Form	shares("shares", 149, 149);
	std::cout << "Form " << shares.getFormName() << " has sign status as " << shares.getSignedStatus() << std::endl;
	std::cout << "Can the Bureaucrat " << Civil_Servant.getName() << " sign it ?" << std::endl;
	Civil_Servant.signForm(shares);
	shares.beSigned(Civil_Servant);
	std::cout << "Let's check: now Form " << shares.getFormName() << " has " << shares.getSignedStatus() << " as sign status" << std::endl;
	std::cout << std::endl;

	Form	tax_form("tax_form", 150, 150);
	std::cout << "Form " << tax_form.getFormName() << " has sign status as " << tax_form.getSignedStatus() << std::endl;
	std::cout << "Can the Bureaucrat " << Civil_Servant.getName() << " sign it ?" << std::endl;
	Civil_Servant.signForm(tax_form);
	tax_form.beSigned(Civil_Servant);
	std::cout << "Let's check: now Form " << tax_form.getFormName() << " has " << tax_form.getSignedStatus() << " as sign status" << std::endl;
	std::cout << std::endl;

	Civil_Servant.incrementGrade();
	std::cout << "Form " << shares.getFormName() << " has sign status as " << shares.getSignedStatus() << std::endl;
	std::cout << "Can the Bureaucrat " << Civil_Servant.getName() << " sign it ?" << std::endl;
	Civil_Servant.signForm(shares);
	shares.beSigned(Civil_Servant);
	std::cout << "Let's check: now Form " << shares.getFormName() << " has " << shares.getSignedStatus() << " as sign status" << std::endl;
	std::cout << std::endl;
	
	Civil_Servant.decrementGrade();	
	Civil_Servant.decrementGrade();
	
	return (0);
}