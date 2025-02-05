/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:35:00 by simon             #+#    #+#             */
/*   Updated: 2025/02/05 15:58:25 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>

// template <typename T, int I>
// class	easyfind
// {
// 	private:

// 	public:
// 		easyfind();
// 		easyfind(easyfind const& copy);
// 		easyfind const& operator=(easyfind const& copy);
// 		~easyfind();
// };

// template <typename T, int I>
// easyfind::easyfind()
// {
// 	std::cout << "Default Constructor Called" << std::endl;
// }

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
	int			index = 0;
	try {
	{
		for (it = container.begin(); it != container.end(); it++, index++)
		{
			if (*it == to_find)
				return (index);
		}
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