/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:01:14 by simarcha          #+#    #+#             */
/*   Updated: 2025/02/11 16:27:32 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		
		~MutantStack(){}

		MutantStack(const std::stack<T> &ref) : std::stack<T>()
		{
			std::cout << "Mutant Stack copy constructor called\n";
			(void)ref;
		}
		
		std::stack<T> &operator=(const std::stack<T> &ref)
		{
			std::cout << "Mutant Stack assignation operator called\n";
			if (this != &ref)
				this = &ref;
			return (*this);
		}
		
		typedef typename std::deque<T>::iterator	iterator;
		iterator	begin()
		{
			return (this->c.begin());
		}

		iterator	end()
		{
			return (this->c.end());
		}
};

#endif