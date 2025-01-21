/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:35:18 by simon             #+#    #+#             */
/*   Updated: 2025/01/21 18:08:52 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define	FORM_HPP

#include <iostream>
class Bureaucrat;

class	Form
{
	private:
		std::string const	_form_name;
		bool				_signed_status;
		int const			_required_grade;
		int const			_required_grade_to_execute;

	public:
		Form();
		Form(std::string const name, int const grade, int const exec_grade);
		Form(Form const& copy);
		Form const& operator=(Form const& copy);
		~Form();

		std::string const	getFormName();
		bool				getSignedStatus();
		int					getRequiredGrade();
		int					getRequiredExecution();

		void				beSigned(Bureaucrat position);
		
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what(void) const throw() {return ("Grade is too high");}
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what(void) const throw() {return ("Grade is too low");}
		};
};
std::ostream&	operator<<(std::ostream& str, Form& form);

#endif