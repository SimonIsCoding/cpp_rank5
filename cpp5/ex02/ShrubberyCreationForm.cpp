/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:35:12 by simon             #+#    #+#             */
/*   Updated: 2025/01/21 20:03:04 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default", 145, 137)
{
	std::cout << "ShrubberyCreationForm Default Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm(target, 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Default Destructor Called" << std::endl;
}