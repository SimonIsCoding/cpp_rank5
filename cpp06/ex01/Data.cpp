/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:16:49 by simon             #+#    #+#             */
/*   Updated: 2025/02/01 18:19:23 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
	std::cout << "Data Default Constructor Called\n";
}

Data::Data(std::string name, int age) : _name(name), _age(age)
{
	std::cout << "Data constructor Called\n";
}


Data::~Data()
{
	std::cout << "Data Destructor Called\n";
}

Data::Data(Data const& copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_age = copy._age;
	}
	// std::cout << "Data copy constructor called\n";
}

Data const& Data::operator=(Data const& copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_age = copy._age;
	}
	return (*this);
}

std::string const	Data::getName(void) const
{
	return (_name);
}

int Data::getAge(void) const
{
	return (_age);
}

void	Data::setName(std::string name)
{
	_name = name;
}

void	Data::setAge(int age)
{
	_age = age;
}