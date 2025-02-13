# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/11 17:10:29 by simarcha          #+#    #+#              #
#    Updated: 2025/02/13 12:38:51 by simon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variable
NAME		= btc
COMP		= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98# -fsanitize=address
RM			= rm -rf
INCLUDES	= BitcoinExchange.hpp
SRCS		= main.cpp BitcoinExchange.cpp parsing.cpp
OBJS		= $(SRCS:.cpp=.o)

#Rules
all:		$(NAME)

$(NAME):	Makefile $(INCLUDES) $(OBJS)
			$(COMP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp $(INCLUDES)
			$(COMP) $(CPPFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re