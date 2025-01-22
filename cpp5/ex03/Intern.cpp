/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:11:30 by simon             #+#    #+#             */
/*   Updated: 2025/01/22 19:59:16 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <string.h>
#include "PresidentialPardonForm.cpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

AForm*	form_returned(std::string const target_form)
{
	AForm*	form;
	int	i;

	std::string forms[3] = {"Robotomy", "Presidential", "Shrubbery"};
	for (i = 0; i < 3; i++)
	{
		if (forms[i] == target_form)
			break ;
	}
	switch (i)
	{
		case 0:
			form = new PresidentialPardonForm(target_form);
			break ;
		case 1:
			form = new RobotomyRequestForm(target_form);
			break ;
		case 2:
			form = new ShrubberyCreationForm(target_form);
			break ;
	}
	return (form);	
}

AForm*	makeForm(std::string const form_name, std::string const target_form)
{
	try
	{
		if (strcmp(form_name.c_str(), "Robotomy") || strcmp(form_name.c_str(), "Presidential") || strcmp(form_name.c_str(), "Shrubbery"))
			throw (Intern::IncorrectFormName());
		else
			return (form_returned(target_form));
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (NULL);
}
