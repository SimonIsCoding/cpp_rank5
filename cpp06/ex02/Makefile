# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/01 18:57:14 by simon             #+#    #+#              #
#    Updated: 2025/02/01 20:42:38 by simon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME		= real_type_ex02
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
INCLUDES	= Base.hpp A.hpp B.hpp C.hpp
SRCS		= main.cpp Base.cpp
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