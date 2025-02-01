/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:52:55 by simon             #+#    #+#             */
/*   Updated: 2025/02/01 18:52:24 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include "Data.hpp"

int	main(void)
{
	Data		simon("Simon", 23);
	uintptr_t	test;

	test = Serialization::serialize(&simon);
	std::cout << "simon name: " << simon.getName() << std::endl;
	std::cout << "simon name: " << simon.getAge() << std::endl;
	Data*	data = Serialization::deserialize(test);
	std::cout << "data name: " << data->getName() << std::endl;
	std::cout << "data age: " <<data->getAge() << std::endl;
	return (0);
}