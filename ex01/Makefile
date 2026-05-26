# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gomandam <gomandam@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/23 02:16:59 by gomandam          #+#    #+#              #
#    Updated: 2026/05/23 03:51:22 by gomandam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Essentials for makefile

NAME = phonebook

COMPILER = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf 

SOURCES =	phonebook.cpp 

OBJECTS = $(SOURCES:.cpp=.o)

$(NAME): $(OBJECTS)
	$(COMPILER) $(FLAGS) -o $@ $^

%.o: %.cpp
	$(COMPILER) $(FLAGS) -c $< -o $@


# Features: Recompile, remove, and clean binaries

all: $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all


# .PHONY treats targets as filenames, skip files if it exists

.PHONY: all clean fclean re

