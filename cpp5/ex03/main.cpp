/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:46:59 by simon             #+#    #+#             */
/*   Updated: 2025/01/22 19:57:35 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
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
		delete rrf;
	}
	return (0);
}