/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:43:21 by simon             #+#    #+#             */
/*   Updated: 2025/01/21 13:19:27 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	Boss;
	Bureaucrat	Hacker;

	Boss.setName("Boss");
	Boss.setGrade(1);
	Boss.decrementGrade();

	Hacker.setName("Hacker");
	Hacker.setGrade(0);
	Hacker.decrementGrade();
	
	return (0);
}