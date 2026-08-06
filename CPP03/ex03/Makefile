# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/23 21:22:01 by gomandam          #+#    #+#              #
#    Updated: 2026/08/06 23:07:23 by gomandam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = diamond_trapero

COMPILER = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -Wno-shadow -Wshadow

SOURCES =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp

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
