/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:35:00 by simon             #+#    #+#             */
/*   Updated: 2025/02/15 19:52:36 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>

class	NumberNotFound:	public std::exception
{
	public:
		const char *what() const throw()
		{
			return ("Number not found");
		}
};

template <typename T>
int	find_in_containers(T container, int to_find)
{
	typename	T::iterator	it;
	try {
	{
		it = std::find(container.begin(), container.end(), to_find);
		if (it != container.end())
			return std::distance(container.begin(), it);
		throw NumberNotFound();
	}
	}
	catch(const NumberNotFound &e)
	{
		std::cerr << "Error when finding " << to_find << ". " << e.what() << std::endl;
	}
	return (-1);
}

#endif