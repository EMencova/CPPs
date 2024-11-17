# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/07 15:32:46 by emencova          #+#    #+#              #
#    Updated: 2024/11/17 22:06:57 by eliskam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AAnimal

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp \
	AAnimal.cpp \
	Cat.cpp \
	Dog.cpp \
	WrongCat.cpp \
	WrongAnimal.cpp \
	Brain.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -fr $(OBJ)

fclean: clean
	rm -fr $(NAME)

re: fclean all