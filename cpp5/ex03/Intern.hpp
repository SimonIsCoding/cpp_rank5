/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:53:32 by simon             #+#    #+#             */
/*   Updated: 2025/01/23 22:59:50 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# ifndef INTERN_HPP
# define INTERN_HPP
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <string.h>

class	Intern
{
	private:

	public:
		Intern();
		~Intern();
		Intern(Intern const &copy);
		Intern const&	operator=(Intern const& copy);
		
		AForm*	makeForm(std::string const form_name, std::string const target_form);
		
		class IncorrectFormName: public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
};

#endif*/

#ifndef INTERN_HPP
#define	INTERN_HPP

#include <iostream>
#include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <string.h>

class	Intern
{
	private:

	public:
		Intern();
		~Intern();
		Intern(Intern const &copy);
		Intern const&	operator=(Intern const& copy);
		
		AForm*	makeForm(std::string const form_name, std::string const target_form);
		
		class IncorrectFormName: public std::exception
		{
			public:
				virtual const char *what(void) const throw() { return ("Incorrect Form Name");}	
		};
};

#endif