# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/10 14:38:59 by gomandam          #+#    #+#              #
#    Updated: 2026/08/16 03:56:46 by gomandam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cerebro

COMPILER = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SOURCES = main.cpp \
	  Animal.cpp \
	  Dog.cpp \
	  Cat.cpp \
	  WrongAnimal.cpp \
	  WrongCat.cpp 

OBJECTS = $(SOURCES:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJECTS)
	$(COMPILER) $(FLAGS) -o $@ $^

%.o: %.cpp
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME) *.out

re: fclean all

.PHONY: all clean fclean re
