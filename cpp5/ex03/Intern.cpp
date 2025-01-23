/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:11:30 by simon             #+#    #+#             */
/*   Updated: 2025/01/23 22:56:07 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default Constructor Called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern Destructor Called" << std::endl;
}

Intern const&	Intern::operator=(Intern const& copy)
{
	std::cout << "Intern operator= Called" << std::endl;
	(void)copy;
	return (*this);
}

Intern::Intern(Intern const& copy)
{
	std::cout << "Intern Copy Constructor Called" << std::endl;
	(void)copy;
}

/*const char	*Intern::IncorrectFormName::what() const throw()
{
	return ("Incorrect Form Name");
}*/

AForm*	form_returned(std::string const target_form)
{
	AForm*	form;
	int	i;

	std::string forms[3] = {"Presidential", "Robotomy", "Shrubbery"};
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

AForm*	Intern::makeForm(std::string const form_name, std::string const target_form)
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