# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
<<<<<<< HEAD
#    By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/25 16:00:46 by simarcha          #+#    #+#              #
#    Updated: 2025/01/25 16:07:41 by simarcha         ###   ########.fr        #
=======
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/30 17:48:46 by simon             #+#    #+#              #
#    Updated: 2025/01/30 20:24:16 by simon            ###   ########.fr        #
>>>>>>> 0f3a0940b96e9f5773e34b898f8412d7d494f9f1
#                                                                              #
# **************************************************************************** #

#Variables
<<<<<<< HEAD
NAME		= Conversion_Scalar_Types_Ex00
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98 -fsanitize=address
=======
NAME		= convert
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
>>>>>>> 0f3a0940b96e9f5773e34b898f8412d7d494f9f1
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

<<<<<<< HEAD
.PHONY:		all re clean fclean
=======
.PHONY:		fclean clean all re
>>>>>>> 0f3a0940b96e9f5773e34b898f8412d7d494f9f1
