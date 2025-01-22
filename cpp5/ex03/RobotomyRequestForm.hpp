/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:35:41 by simon             #+#    #+#             */
/*   Updated: 2025/01/22 15:19:34 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define	ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class	RobotomyRequestForm : public AForm
{
	private:

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const target);
		~RobotomyRequestForm();
		void	execute(Bureaucrat const & executor) const;
};

#endif