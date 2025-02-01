/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:59:37 by simon             #+#    #+#             */
/*   Updated: 2025/02/01 15:42:58 by simon            ###   ########.fr       */
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
	int	len = str.size();
	for (int i = 0; i < len; i++)
	{
		if (i != 0 && str[i] == '-')
			return false;
		if (!(str[i] > 47 && str[i] < 58))
			return false;
	}
	return (true);
}

bool	is_float(std::string str)
{
	int	point = 0;
	int	f = 0;
	int	len = str.size();
	for (int i = 0; i < len; i++)
	{
		if (i != 0 && str[i] == '-')
			return false;
		if ((!(str[i] > 47 && str[i] < 58)) && str[i] != '.' &&  str[i] != 'f')
			return false;
		if (str[i] == '.')
			point++;
		if (str[i] == 'f' && str[i + 1] == '\0')
			f++;
	}
	if (point != 1 || f != 1)
		return (false);
	return (true);
}

bool	is_double(std::string str)
{
	int	point = 0;
	int	len = str.size();
	for (int i = 0; i < len; i++)
	{
		if (i != 0 && str[i] == '-')
			return false;
		if ((!(str[i] > 47 && str[i] < 58)) && str[i] != '.')
			return false;
		if (str[i] == '.')
			point++;
	}
	if (point != 1)
		return (false);
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
		{
			switch (i)
			{
				case 0:
				case 3:
					std::cout << "char: impossible\n";
					std::cout << "int: impossible\n";
					std::cout << "float: -inff\n";
					std::cout << "double: -inf\n";
					return (5);
				case 1:
				case 4:
					std::cout << "char: impossible\n";
					std::cout << "int: impossible\n";
					std::cout << "float: +inff\n";
					std::cout << "double: +inf\n";
					return (5);
				case 2:
				case 5:
					std::cout << "char: impossible\n";
					std::cout << "int: impossible\n";
					std::cout << "float: nanf\n";
					std::cout << "double: nan\n";
					return (5);
			}
		}
		i++;
	}
	std::cout << "char: impossible\n";
	std::cout << "int: impossible\n";
	std::cout << "float: impossible\n";
	std::cout << "double: impossible\n";
	return (-1);
}

int	check_type(std::string str)
{
	if (is_int(str) == true)
		return (2); // this is an int
	else if (str.size() == 1)
		return (1);//this is a char
	else if (is_float(str))
		return (3); // this is a float
	else if (is_double(str) == true)
		return (4); // this is a double
	else
		return (check_special_case(str));
}

void	ScalarConverter::convert(std::string str)
{
	int		type = check_type(str);
	int		nb_int = atoi(str.c_str());
	float	nb_float = atof(str.c_str());
	double	nb_double = strtod(str.c_str(), NULL);
	if (type == -1 || type == 5)
		return ;
	if (type == 1)
	{
		nb_int = static_cast<int>(str[0]);
		nb_float = static_cast<int>(str[0]);
		nb_double = static_cast<int>(str[0]);
		if (nb_int > 31 && nb_int != 127)
			std::cout << "char: " << static_cast<int>(str[0]) << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	if (nb_int > 31 && nb_int != 127)
		std::cout << "char: " << static_cast<char>(atoi(str.c_str())) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << nb_int << std::endl;
	if (nb_float == nb_int)
		std::cout << "float: " << nb_float << ".0f" << std::endl;
	else
		std::cout << "float: " << nb_float << "f" << std::endl;
	if (nb_double == nb_int)
		std::cout << "double: " << std::fixed << std::setprecision(1) << nb_double << std::endl;
	else
		std::cout << "double: " << nb_double << std::endl;
}
