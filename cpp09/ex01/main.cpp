/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:14:46 by simon             #+#    #+#             */
/*   Updated: 2025/02/17 16:59:34 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	is_sign(char c)
{
	char arr[4] = {'+', '-', '*', '/'};
	return std::find(arr, arr + 4, c) != (arr + 4);
}

void print_stack(std::stack<std::string> stack)
{
	while (!stack.empty())
	{
		std::cout << stack.top() << std::endl;
		stack.pop();
	}
}

std::stack<std::string>	create_stack(char *argv_1)
{
	std::string	input = argv_1;
	int		i = 0;
	std::stack<std::string> stack;
	int		flag;
	// long	result;
	
	// result = 0;
	while (input[i] != '\0')
	{
		while (input[i] == ' ')
			i++;
		if (is_sign(input[i]) != -1 && !std::isdigit(input[i + 1]))
		{
			std::string str(1, input[i]);
			stack.push(str);
			flag = 0;
		}
		else if (std::isdigit(input[i]) || (input[i] == '-' && std::isdigit(input[i + 1])))
		{
			int j = i;
			if (input[i] == '-')
				j++;
			while (std::isdigit(input[j]))
				j++;
			stack.push(input.substr(i, j - i));
			i += j - i - 1;
			flag = 1;
		}
		if (flag == 0)
		{
			
		}
		i++;
	}
	print_stack(stack);
	(void)flag;
	return (stack);
}

// int	parse(std::stack<std::string> stack)
// {
		
// }

// long long	calculating_the_result(std::stack<std::string> stack)
// {
	
// }

int	main(int argc, char**argv)
{
	std::stack<std::string>	stack;
	if (argc != 2)
	{
		std::cerr << "Error\n";
		return (1);
	}
	stack = create_stack(argv[1]);
	// if (parse(stack) != 1)
	// {
	// 	std::cerr << "Error\n";
	// 	return (1);
	// }
	// std::cout << calculating_the_result(stack) << std::endl;
	return (0);
}