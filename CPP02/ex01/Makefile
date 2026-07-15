# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/02 15:46:50 by gomandam          #+#    #+#              #
#    Updated: 2026/07/16 01:15:05 by gomandam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixedPointConversion 

COMPILER = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SOURCES =	main.cpp \
		Fixed.cpp

OBJECTS = $(SOURCES:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJECTS)
	$(COMPILER) $(FLAGS) -o $@ $^

%.o: %.cpp
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re 
