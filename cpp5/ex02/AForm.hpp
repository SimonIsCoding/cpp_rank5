/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:35:18 by simon             #+#    #+#             */
/*   Updated: 2025/01/22 15:47:34 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define	FORM_HPP

#include <iostream>
class Bureaucrat;

class	AForm
{
	private:
		std::string const	_form_name;
		bool				_signed_status;
		int const			_required_grade;
		int const			_required_grade_to_execute;

	public:
		AForm();
		AForm(std::string const name, int const grade, int const exec_grade);
		AForm(AForm const& copy);
		AForm const& operator=(AForm const& copy);
		virtual ~AForm();

		std::string const	getFormName() const;
		bool				getSignedStatus() const;
		int					getRequiredGrade() const;
		int					getRequiredExecution() const;

		void				beSigned(Bureaucrat position);

		virtual void 		execute(Bureaucrat const & executor) const = 0;
		
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
std::ostream&	operator<<(std::ostream& str, AForm& form);

#endif