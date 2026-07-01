# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/01 15:34:57 by gomandam          #+#    #+#              #
#    Updated: 2026/07/01 22:24:55 by gomandam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

COMPILER = c++

FLAGS =	-Wall -Werror -Wextra -std=c++98

SOURCES =	main.cpp \
		Harl.cpp

OBJECTS = $(SOURCES:.cpp=.o)

RM = rm -rf

all:	$(NAME)

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
