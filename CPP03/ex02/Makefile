# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/23 21:22:01 by gomandam          #+#    #+#              #
#    Updated: 2026/08/04 18:18:51 by gomandam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap

COMPILER = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SOURCES =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp

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
