# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gomandam <gomandam@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/21 01:03:46 by gomandam          #+#    #+#              #
#    Updated: 2026/05/21 03:11:42 by gomandam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Megaphone

COMPILER = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SOURCES = Megaphone.cpp

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

