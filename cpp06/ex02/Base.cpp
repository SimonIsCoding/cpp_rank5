/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:11:02 by simon             #+#    #+#             */
/*   Updated: 2025/02/02 12:39:42 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <typeinfo>

Base::~Base()
{
	std::cout << "Base Destructor Called" << std::endl;	
}

Base	*generate(void)
{
	srand(static_cast<unsigned int>(time(NULL)));
	int nb = rand() % 3;
	std::cout << "nb = " << nb << std::endl;
	switch (nb)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "pointer p is class A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "pointer p is class B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "pointer p is class C\n";
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Atype\n";
		return ;
	}
	catch (std::bad_cast&){}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Btype\n";
		return ;
	}
	catch (std::bad_cast&){}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Ctype\n";
		return ;
	}
	catch (std::bad_cast&){}
}
