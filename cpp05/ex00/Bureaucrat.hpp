/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:42:31 by simon             #+#    #+#             */
/*   Updated: 2025/01/21 15:30:28 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
	private:
		std::string const		_name;
		int						_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string const name);
		Bureaucrat(Bureaucrat const& copy);
		Bureaucrat const& operator=(Bureaucrat const& copy);
		~Bureaucrat();

		void	incrementGrade();
		void	decrementGrade();

		void				setGrade(int grade);

		std::string const	getName();
		int					getGrade();


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

std::ostream&	operator<<(std::ostream &str, Bureaucrat &bureaucrat);

#endif