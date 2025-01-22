/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:16:57 by simon             #+#    #+#             */
/*   Updated: 2025/01/22 18:44:14 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
// #include <unistd.h>
#include <ctime> 

RobotomyRequestForm::RobotomyRequestForm() : AForm("default", 72, 45)
{
	std::cout << "RobotomyRequestForm Default Constructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : AForm(target, 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Default Destructor Called" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << "*** RobotomyRequestForm is making some drilling noises ***" << std::endl;

    srand(static_cast<unsigned int>(time(NULL)));
    int nb = rand();
	// sleep(1);
	std::cout << "random nb = " << nb << std::endl;
	if (nb % 2 == 0)
		std::cout << executor.getName() << " has been successfully robotomized" << std::endl;
	else
		std::cout << "The robotomy has failed for " << executor.getName() << std::endl;
}