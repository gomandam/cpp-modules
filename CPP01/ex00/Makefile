# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gomandam <gomandam@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/16 01:23:12 by gomandam          #+#    #+#              #
#    Updated: 2026/06/16 17:35:59 by gomandam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

COMPILER = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SOURCES =	main.cpp \
		Zombie.cpp 

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
