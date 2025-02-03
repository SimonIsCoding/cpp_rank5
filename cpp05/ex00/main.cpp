/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:43:21 by simon             #+#    #+#             */
/*   Updated: 2025/01/21 15:27:27 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	// Bureaucrat	Boss_;
	// Bureaucrat	Hacker_;
	Bureaucrat	Civil_servant_;
	
	Bureaucrat	Boss("Boss");
	Boss.setGrade(1);
	Boss.decrementGrade();
	Boss.incrementGrade();
	Boss.incrementGrade();

	Bureaucrat	Hacker("Hacker");
	Hacker.setGrade(0);
	Hacker.decrementGrade();

	Bureaucrat	Civil_servant("Civil_servant");
	Civil_servant.setGrade(150);
	Civil_servant.incrementGrade();
	Civil_servant.decrementGrade();
	Civil_servant.decrementGrade();
	
	Civil_servant_ = Civil_servant;
	
	return (0);
}