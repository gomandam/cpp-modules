# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/10 14:38:59 by gomandam          #+#    #+#              #
#    Updated: 2026/11/03 22:14:02 by gomandam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = form 

COMPILER = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

SOURCES = main.cpp \
	  Form.cpp \
	  Bureaucrat.cpp

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
