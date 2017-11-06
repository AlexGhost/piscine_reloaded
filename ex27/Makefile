# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acourtin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/19 11:18:12 by acourtin          #+#    #+#              #
#    Updated: 2017/09/19 14:56:52 by acourtin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: compil

compil:
	gcc -Wall -Wextra -Werror ft_display_file.c ft_putchar.c -o ft_display_file

compilsafe:
	gcc ft_display_file.c ft_putchar.c -o ft_display_file

clean:
	rm -rf *.o

fclean: clean
	rm -rf ft_display_file

exec: flclean compil
	./ft_display_file
