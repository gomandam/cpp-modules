# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/02 15:46:50 by gomandam          #+#    #+#              #
#    Updated: 2026/07/14 20:56:35 by gomandam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed 

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
