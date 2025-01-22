# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: simon <simon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/21 18:39:13 by simon             #+#    #+#              #
#    Updated: 2025/01/22 18:52:59 by simarcha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME		= Form_28B_ex02
COMP		= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
INCLUDES	= AForm.hpp Bureaucrat.hpp ShrubberyCreationForm.hpp \
			RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
SRCS		= AForm.cpp Bureaucrat.cpp main.cpp PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJS		= $(SRCS:.cpp=.o)
RM			= rm -rf

#Rules
all:		$(NAME)

$(NAME):	Makefile $(INCLUDES) $(OBJS)
			$(COMP) $(FLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp $(INCLUDES)
			$(COMP) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS) *_shrubbery

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean all
