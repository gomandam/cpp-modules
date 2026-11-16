# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/22 12:26:48 by gomandam          #+#    #+#              #
#    Updated: 2026/09/23 00:02:33 by gomandam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

COMPILE = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SOURCES =	main.cpp \
		Bureaucrat.cpp

OBJECTS = $(SOURCES:.cpp=.o)

RM = rm -rf

all:	$(NAME)

$(NAME): $(OBJECTS)
	$(COMPILE) $(FLAGS) -o $@ $^

%.o: %.cpp
	$(COMPILE) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
