# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/20 13:34:04 by simon             #+#    #+#              #
#    Updated: 2025/01/20 17:23:16 by simon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variable
NAME		= Bureaucrat_ex00
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
INCLUDES	= Bureaucrat.hpp
SRCS		= main.cpp \
			Bureaucrat.cpp

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