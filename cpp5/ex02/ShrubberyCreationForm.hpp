/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:34:25 by simon             #+#    #+#             */
/*   Updated: 2025/01/21 19:58:19 by simon            ###   ########.fr       */
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
		
};

#endif