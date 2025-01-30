# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/30 17:48:46 by simon             #+#    #+#              #
#    Updated: 2025/01/30 20:24:16 by simon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME		= convert
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
INCLUDES	= ScalarConverter.hpp
SRCS		= main.cpp ScalarConverter.cpp
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

.PHONY:		fclean clean all re