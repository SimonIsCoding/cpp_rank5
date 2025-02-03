/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:35:12 by simon             #+#    #+#             */
/*   Updated: 2025/01/22 18:35:05 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

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
void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string	filename;

	filename = executor.getName() + "_shrubbery";
	std::ofstream	file(filename.c_str());
	if (file.is_open())
	{
		file << "               v .   ._, |_  ., " << std::endl;
		file << "          `-._\\/  .  \\ /    |/_" << std::endl;
		file << "               \\\\  _\\, y | \\//" << std::endl;
		file << "         _\\_.___\\\\, \\\\/ -.\\||" << std::endl;
		file << "           `7-,--.`._||  / / ," << std::endl;
		file << "           /'     `-. `./ / |/_.'" << std::endl;
		file << "                     |    |//" << std::endl;
		file << "                     |_    /" << std::endl;
		file << "                     |-   |" << std::endl;
		file << "                     |   =|" << std::endl;
		file << "                     |    |" << std::endl;
		file << " --------------------/ ,  .\\--------._" << std::endl;
		file.close();
		std::cout << "Creating a Shruberry form" << std::endl;
	}
	else
		std::cerr << "Couldn't open " << filename << " file" << std::endl;
}