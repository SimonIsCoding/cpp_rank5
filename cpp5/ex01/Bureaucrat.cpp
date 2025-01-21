/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:42:31 by simon             #+#    #+#             */
/*   Updated: 2025/01/21 18:21:36 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
	// std::cout << "Bureaucrat Default constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name) : _name(name)
{
	// std::cout << "Bureaucrat constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy) : _name(copy._name), _grade(copy._grade)
{
	// std::cout << "Bureaucrat copy constructor Called" << std::endl;
}

Bureaucrat const& Bureaucrat::operator=(Bureaucrat const& copy)
{
	// std::cout << "Bureaucrat operator= Called" << std::endl;
	if (this != &copy)
		_grade = copy._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Default Bureaucrat destructor Called" << std::endl;
}

void	Bureaucrat::setGrade(int grade)
{
	_grade = grade;
}

void	Bureaucrat::decrementGrade()
{
	int	old_grade;
	
	old_grade = _grade;
	try
	{
		if (_grade < 1)
			throw (Bureaucrat::GradeTooHighException());
		else if (_grade >= 150)
			throw (Bureaucrat::GradeTooLowException());
		else
		{
			_grade++;
			std::cout << _name << "'s grade is decrementing. Passing from " << old_grade << " to " << _grade << std::endl;
		}
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::incrementGrade()
{
	int	old_grade;
	
	old_grade = _grade;
	try
	{
		if (_grade <= 1)
			throw (Bureaucrat::GradeTooHighException());
		else if (_grade > 150)
			throw (Bureaucrat::GradeTooLowException());
		else
		{
			_grade--;
			std::cout << _name << "'s grade is incrementing. Passing from " << old_grade << " to " << _grade << std::endl;
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

void	Bureaucrat::signForm(Form f)
{
	try
	{
		if (_grade < 1)
			throw (Bureaucrat::GradeTooHighException());
		else if (_grade > 150)
			throw (Bureaucrat::GradeTooLowException());
		else
		{
			if (_grade <= f.getRequiredGrade())
				std::cout << _name << " signed " << f.getFormName() << std::endl;
			else
				std::cout << _name << " couldn’t sign " << f.getFormName() << " because ";
		}
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& str, Bureaucrat& bureaucrat)
{
	return (str << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade());
}