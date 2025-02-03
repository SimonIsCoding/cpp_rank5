/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:42:32 by simon             #+#    #+#             */
/*   Updated: 2025/01/21 18:21:08 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _form_name("default"), _signed_status(false), _required_grade(1), _required_grade_to_execute(1)
{
	// std::cout << "Form Default Constructor Called" << std::endl;
}

Form::Form(std::string const name, int const grade, int const exec_grade) : _form_name(name), _required_grade(grade), _required_grade_to_execute(exec_grade)
{
	_signed_status = false;
}

Form::Form(Form const& copy) : _form_name(copy._form_name), _signed_status(copy._signed_status), _required_grade(copy._required_grade), _required_grade_to_execute(copy._required_grade_to_execute)
{
	// std::cout << "Form Copy Constructor Called" << std::endl;
}

Form const& Form::operator=(Form const& copy)
{
	// std::cout << "Form operator= called" << std::endl;
	if (this != &copy)
		_signed_status = copy._signed_status;
	return (*this);
}

std::string const	Form::getFormName()
{
	return (_form_name);
}

bool	Form::getSignedStatus()
{
	return _signed_status;
}

int	Form::getRequiredGrade()
{
	return _required_grade;
}

int	Form::getRequiredExecution()
{
	return _required_grade_to_execute;
}

void	Form::beSigned(Bureaucrat position)
{
	try
	{
		if (!(position.getGrade() <= _required_grade))
			throw (Bureaucrat::GradeTooLowException());
		else
			_signed_status = true;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

Form::~Form()
{
	// std::cout << "Form Default Destructor Called" << std::endl;
}

std::ostream&	operator<<(std::ostream& str, Form& form)
{
	return (str << form.getFormName() << ", has to be sign with grade " << form.getRequiredGrade());
}
