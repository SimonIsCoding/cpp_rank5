/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:42:31 by simon             #+#    #+#             */
/*   Updated: 2025/01/20 19:47:13 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy)
{
	std::cout << "Bureaucrat copy constructor Called" << std::endl;
	if (this != &copy)
		*this = copy;
}

Bureaucrat const& Bureaucrat::operator=(Bureaucrat const& copy)
{
	std::cout << "Bureaucrat operator= Called" << std::endl;
	if (this != &copy)
	{
		_name = copy._name;
		_grade = copy._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default Bureaucrat destructor Called" << std::endl;
}

void	Bureaucrat::decrementGrade()
{
	try
	{
		if (_grade < 1 || _grade >= 150)
			throw (Bureaucrat::GradeTooHighException());
		else
		{
			_grade++;
		}
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::string const Bureaucrat::getName()
{
	return (_name);
}

int	Bureaucrat::getGrade()
{
	return (_grade);
}

std::ostream	&operator<<(std::ostream &str, Bureaucrat const &bureaucrat)
{
	return (str << bureaucrat.getName() << ">, bureaucrat grade " << bureaucrat.getGrade());
}