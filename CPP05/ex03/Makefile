# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/10 14:38:59 by gomandam          #+#    #+#              #
#    Updated: 2026/11/18 00:21:33 by gomandam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = intern_job 

COMPILER = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic \
	-finput-charset=UTF-8 -fexec-charset=UTF-8

SOURCES = main.cpp \
	  AForm.cpp \
	  ShrubberyCreationForm.cpp \
	  RobotomyRequestForm.cpp \
	  PresidentialPardonForm.cpp \
	  Bureaucrat.cpp \
	  Intern.cpp

OBJECTS = $(SOURCES:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJECTS)
	$(COMPILER) $(FLAGS) -o $@ $^

%.o: %.cpp
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME) *.out *_shrubbery

re: fclean all

.PHONY: all clean fclean re
