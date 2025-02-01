/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:15:33 by simon             #+#    #+#             */
/*   Updated: 2025/02/01 18:20:38 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define	DATA_HPP

#include <iostream>

class	Data
{
	private:
		std::string	_name;
		int			_age;
	public:
		Data();
		Data(std::string name, int age);
		Data(Data const &copy);
		Data const& operator=(Data const &copy);
		~Data();

		void	setName(std::string _name);
		void	setAge(int age);

		std::string const	getName() const;
		int					getAge() const;
};

#endif