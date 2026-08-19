# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gomandam <gomandam@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/16 20:01:01 by gomandam          #+#    #+#              #
#    Updated: 2026/06/19 01:59:31 by gomandam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon

COMPILER = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

SOURCES =	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp

OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(COMPILER) $(FLAGS) -o $@ $^

%.o: %.cpp
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

dev:
	valgrind --leak-check=full ./weapon

.PHONY: all clean fclean re dev
