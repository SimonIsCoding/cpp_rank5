/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:42:32 by simon             #+#    #+#             */
/*   Updated: 2025/01/21 18:48:19 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _form_name("default"), _signed_status(false), _required_grade(1), _required_grade_to_execute(1)
{
	// std::cout << "AForm Default Constructor Called" << std::endl;
}

AForm::AForm(std::string const name, int const grade, int const exec_grade) : _form_name(name), _required_grade(grade), _required_grade_to_execute(exec_grade)
{
	_signed_status = false;
}

AForm::AForm(AForm const& copy) : _form_name(copy._form_name), _signed_status(copy._signed_status), _required_grade(copy._required_grade), _required_grade_to_execute(copy._required_grade_to_execute)
{
	// std::cout << "AForm Copy Constructor Called" << std::endl;
}

AForm const& AForm::operator=(AForm const& copy)
{
	// std::cout << "AForm operator= called" << std::endl;
	if (this != &copy)
		_signed_status = copy._signed_status;
	return (*this);
}

std::string const	AForm::getFormName()
{
	return (_form_name);
}

bool	AForm::getSignedStatus()
{
	return _signed_status;
}

int	AForm::getRequiredGrade()
{
	return _required_grade;
}

int	AForm::getRequiredExecution()
{
	return _required_grade_to_execute;
}

void	AForm::beSigned(Bureaucrat position)
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

AForm::~AForm()
{
	// std::cout << "AForm Default Destructor Called" << std::endl;
}

std::ostream&	operator<<(std::ostream& str, AForm& form)
{
	return (str << form.getFormName() << ", has to be sign with grade " << form.getRequiredGrade());
}
