# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gomandam <gomandam@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/16 20:01:01 by gomandam          #+#    #+#              #
#    Updated: 2026/06/17 20:29:39 by gomandam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombiehorde

COMPILER = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

SOURCES =	Zombie.cpp \
		zombieHorde.cpp \
		main.cpp

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

.PHONY: all clean fclean re
