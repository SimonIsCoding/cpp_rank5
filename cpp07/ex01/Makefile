# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/03 15:38:10 by simarcha          #+#    #+#              #
#    Updated: 2025/02/03 17:10:29 by simarcha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME		= Iter_cpp07_ex01
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
INCLUDES	= iter.hpp
SRCS		= main.cpp
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