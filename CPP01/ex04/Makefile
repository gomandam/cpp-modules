# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/28 00:13:36 by gomandam          #+#    #+#              #
#    Updated: 2026/06/30 02:10:58 by gomandam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

COMPILER = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

SOURCES =	main.cpp \
		Sed.cpp

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
