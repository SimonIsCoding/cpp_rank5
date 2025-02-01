/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:54:57 by simon             #+#    #+#             */
/*   Updated: 2025/02/01 18:12:54 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include "Data.hpp"

Serialization::Serialization()
{
	std::cout << "Serialization Default Constructor Called" << std::endl;
}

Serialization::~Serialization()
{
	std::cout << "Serialization Destructor Called" << std::endl;
}

Serialization::Serialization(Serialization const& copy)
{
	(void)copy;
}

Serialization const& Serialization::Serialization::operator=(Serialization const& copy)
{
	(void)copy;
	return (*this);
}

uintptr_t Serialization::serialize(Data* ptr)
{
	uintptr_t result = reinterpret_cast<uintptr_t>(ptr);
	return (result);
}

Data* Serialization::deserialize(uintptr_t raw)
{
	Data*	result = reinterpret_cast<Data *>(raw);
	return (result);
}