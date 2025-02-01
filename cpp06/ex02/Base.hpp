/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:03:30 by simon             #+#    #+#             */
/*   Updated: 2025/02/01 19:12:41 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BASE_HPP
#define BASE_HPP

#include <iostream>

class	Base
{
	public:
		virtual ~Base();	
};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif