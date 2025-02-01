/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:53:47 by simon             #+#    #+#             */
/*   Updated: 2025/02/01 18:44:57 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SERIALIZATION_HPP
#define	SERIALIZATION_HPP

#include <iostream>
#include <stdint.h>
class	Data;

class	Serialization
{
	private:

	public:
		Serialization();
		Serialization(Serialization const &copy);
		Serialization const& operator=(Serialization const& copy);
		~Serialization();

		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif