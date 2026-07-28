# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/23 21:22:01 by gomandam          #+#    #+#              #
#    Updated: 2026/07/27 20:41:49 by gomandam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = claptrap

COMPILER = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SOURCES = main.cpp \
	 ClapTrap.cpp

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
