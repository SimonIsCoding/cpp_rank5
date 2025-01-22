/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:34:25 by simon             #+#    #+#             */
/*   Updated: 2025/01/22 15:25:13 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define	SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm
{
	private:

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const target);
		~ShrubberyCreationForm();
		void	execute(Bureaucrat const & executor) const;
};

#endif