#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsankola <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 18:37:35 by tsankola          #+#    #+#              #
#    Updated: 2022/07/20 18:39:57 by tsankola         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = bsq

HEADER = bsq.h
FLAGS = -Wall -Wextra -Werror

OBJ = bsq.o bsq_object.o bsq_operations.o ft_linelen.o square_object.o \
	ft_initialize_array.o ft_overflow_stuff.o

SRC = src/bsq.c src/bsq_object.c src/bsq_operations.c src/ft_linelen.c \
	src/square_object.c src/ft_initialize_array.c src/ft_overflow_stuff.c

CC = gcc

all: $(NAME)

$(NAME): 
	$(CC) $(FLAGS) $(SRC) -I $(HEADER) -o bsq

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all