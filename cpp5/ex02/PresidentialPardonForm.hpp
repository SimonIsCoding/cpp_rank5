/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:33:21 by simon             #+#    #+#             */
/*   Updated: 2025/01/21 19:55:11 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define	PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	private:
	
	public:
		PresidentialPardonForm();
		PresidentialPardonForm::PresidentialPardonForm(std::string const target);
		~PresidentialPardonForm();
};

#endif