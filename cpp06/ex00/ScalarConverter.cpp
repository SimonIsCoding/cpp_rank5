/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:59:37 by simon             #+#    #+#             */
/*   Updated: 2025/01/30 21:32:02 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter Default Constructor Called" << std::endl;
}

// ScalarConverter::ScalarConverter(ScalarConverter const &copy)
// {
// 	if (this != &copy)
// 	{
		
// 	}
// }

// ScalarConverter const&	ScalarConverter::operator=(ScalarConverter const &copy)
// {
// 	if (this != &copy)
// 	{
		
// 	}
// 	return (*this);
// }

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor Called" << std::endl;
}

bool	is_int(std::string str)
{
	for (int i = 0; i < str.size(); i++)
	{
		if (i != 0 && str[i] == '-')
			return false;
		if (!(str[i] > 47 && str[i] < 58))
			return false;
	}
	return (true);
}

int	ft_strncmp(std::string s1, std::string s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n && n > 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	check_special_case(std::string str)
{
	std::string special_case[6] = {"-inff", "+inff", "nanf", "+inf", "-inf", "nan"};
	int	i = 0;
	while (i < 6)
	{
		if (!ft_strncmp(special_case[i].c_str(), str.c_str(), str.size()))
			return (5);
		i++;
	}
	return (-1);
}


//cette fonction sert a detecter quelle type est recu en str/parametre
//Ensuite on l'envoit a la fonction converter pour que celle-ci puisse la convertir selon les differents outputs
int	check_type(std::string str)
{
	if (str.size() == 1 && str[0] != 0)
	{
		return (1);//this is a char
	}
	else if (is_int(str) == true)
		return (2); // this is an int
	else if (str.find('.') && str.find('f'))
		return (3); // this is a float
	else if (str.find('.') && str.size() > 1)
		return (4); // this is a double
	else
		return (check_special_case(str)); // check for special cases +inf, ...
}