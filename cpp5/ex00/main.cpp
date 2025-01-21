/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:43:21 by simon             #+#    #+#             */
/*   Updated: 2025/01/21 14:08:55 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	Boss;
	Bureaucrat	Hacker;
	Bureaucrat	Civil_servant;
	
	Boss.setName("Boss");
	Boss.setGrade(1);
	Boss.decrementGrade();
	Boss.incrementGrade();
	Boss.incrementGrade();

	Hacker.setName("Hacker");
	Hacker.setGrade(0);
	Hacker.decrementGrade();

	Civil_servant.setName("Civil_servant");
	Civil_servant.setGrade(150);
	Civil_servant.incrementGrade();
	Civil_servant.decrementGrade();
	Civil_servant.decrementGrade();
	
	return (0);
}