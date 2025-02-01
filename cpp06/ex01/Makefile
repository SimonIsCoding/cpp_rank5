# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/01 15:45:36 by simon             #+#    #+#              #
#    Updated: 2025/02/01 16:14:46 by simon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME		= Serialization
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
INCLUDES	= Serialization.hpp Data.hpp
SRCS		= main.cpp Serialization.cpp Data.cpp
OBJS		= $(SRCS:.cpp=.o)
RM			= rm -rf

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