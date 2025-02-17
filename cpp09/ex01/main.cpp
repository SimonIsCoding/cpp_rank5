/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:14:46 by simon             #+#    #+#             */
/*   Updated: 2025/02/17 18:03:09 by simon            ###   ########.fr       */
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
	std::cout << "STACK__________________________\n";
	while (!stack.empty())
	{
		std::cout << stack.top() << std::endl;
		stack.pop();
	}
	std::cout << "_______________________________\n";
}

std::stack<std::string>	create_stack(char *argv_1)
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
		std::cout << "1 && i = _" << i << "_ && input[i] = _" << input[i] << "_\n";
		if (is_sign(input[i]) != -1 && !std::isdigit(input[i + 1]))
		{
			std::cout << "2\n";
			// std::string str(1, input[i]);
			// stack.push(str);
			flag = 0;
		}
		else if (std::isdigit(input[i]) || (input[i] == '-' && std::isdigit(input[i + 1])))
		{
			std::cout << "3\n";
			int j = i;
			if (input[i] == '-')
				j++;
			while (std::isdigit(input[j]))
				j++;
			stack.push(input.substr(i, j - i));
			i += j - i - 1;
			flag = 1;
			print_stack(stack);
		}
		if (flag == 0)
		{
			std::cout << "4\n";
			if (stack.size() <= 1)
			{
				std::cerr << "Error 4\n";
				exit(1);
			}
			int f1 = atoi(stack.top().c_str());
			stack.pop();
			int f2 = atoi(stack.top().c_str());
			stack.pop();
			int k = is_sign(input[i]);
			std::cout << "k = " << k << std::endl;
			std::cout << "f1 = " << f1 << std::endl;
			std::cout << "f2 = " << f2 << std::endl;
			switch(k)
			{
				case 0:
					result = f1 + f2;
					break ;
				case 1:
					result = f1 - f2;
					break ;
				case 2:
					result = f1 * f2;
					break ;
				case 3:
					result = f1 / f2;
					break ;
			}
			std::stringstream ss;
			ss << result;
			std::string result_str = ss.str();
			stack.push(result_str);
		}
		i++;
	}
	print_stack(stack);
	std::cout << "result: " << result << std::endl;
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