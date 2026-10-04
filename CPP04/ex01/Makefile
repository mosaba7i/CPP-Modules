# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/27 07:22:35 by malsabah          #+#    #+#              #
#    Updated: 2026/09/25 14:35:31 by malsabah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain_animals
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = main.cpp Animal.cpp Brain.cpp Dog.cpp Cat.cpp
OBJECTS = $(SOURCES:.cpp=.o)
HEADERS = Animal.hpp Brain.hpp Dog.hpp Cat.hpp
all: $(NAME)
$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
