/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 11:06:26 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/06 18:47:43 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_lib.h"

void	ft_display_file(char *filename)
{
	char	c;
	int		fd;
	int		size;

	c = '\0';
	fd = open(filename, O_RDONLY | O_APPEND);
	size = read(fd, &c, 1);
	if (fd >= 0)
	{
		while (size > 0)
		{
			ft_putchar(c);
			size = read(fd, &c, 1);
		}
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		ft_display_file(argv[1]);
	}
	return (0);
}
