# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acourtin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/06 18:11:52 by acourtin          #+#    #+#              #
#    Updated: 2017/11/06 18:12:00 by acourtin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc
CCFLAGS := -Wall -Wextra -Werror
BIN := binary

all: makelib

makelib:
	$(CC) $(CCFLAGS) -c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
	ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib libft.a

clean:
	rm -rf ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	rm -rf libft.a

re: fclean makelib
