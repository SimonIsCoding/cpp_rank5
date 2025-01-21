# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/21 14:14:02 by simon             #+#    #+#              #
#    Updated: 2025/01/21 14:33:14 by simon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME		= Form_ex01
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
INCLUDES	= Bureaucrat.hpp Form.hpp
SRCS		= Bureaucrat.cpp Form.cpp main.cpp
OBJS		= $(SRCS:.cpp=.o)

#Rules
all:		$(NAME)

$(NAME):	Makefile $(INCLUDES) $(OBJS)
			$(COMP) $(FLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp $(INCLUDES)
			$(COMP) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re