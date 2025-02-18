/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:14:46 by simon             #+#    #+#             */
/*   Updated: 2025/02/18 11:53:13 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	is_sign(char c)
{
	char arr[4] = {'+', '-', '*', '/'};
    for (int i = 0; i < 4; i++)
        if (arr[i] == c)
            return i;
    return -1;
}

void print_stack(std::stack<std::string> stack)
{
	while (!stack.empty())
	{
		std::cout << stack.top() << std::endl;
		stack.pop();
	}
}

std::stack<std::string>	create_stack_and_print_result(char *argv_1)
{
	std::string	input = argv_1;
	int			i = 0;
	std::stack<std::string> stack;
	int			flag;
	long		result = 0;

	while (input[i] != '\0')
	{
		while (input[i] == ' ')
			i++;
		if (is_sign(input[i]) != -1 && !std::isdigit(input[i + 1]))
			flag = 0;
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
			if (stack.size() <= 1)
			{
				std::cerr << "Error\n";
				exit(1);
			}
			long f1 = atol(stack.top().c_str());
			stack.pop();
			long f2 = atol(stack.top().c_str());
			stack.pop();
			int k = is_sign(input[i]);
			switch(k)
			{
				case 0:
					result = f2 + f1;
					break ;
				case 1:
					result = f2 - f1;
					break ;
				case 2:
					result = f2 * f1;
					break ;
				case 3:
					result = f2 / f1;
					break ;
			}
			std::stringstream ss;
			ss << result;
			std::string result_str = ss.str();
			stack.push(result_str);
		}
		i++;
	}
	if (stack.size() > 1)
	{
		std::cerr << "Error\n";
		exit(1);
	}
	std::cout << "result: " << result << std::endl;
	return (stack);
}

int	main(int argc, char**argv)
{
	std::stack<std::string>	stack;
	if (argc != 2)
	{
		std::cerr << "Error\n";
		return (1);
	}
	create_stack_and_print_result(argv[1]);
	return (0);
}