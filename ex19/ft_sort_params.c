/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:10:48 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/06 17:19:19 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c)
{
	printf("%c", c);
}

void	trier(int ac, char **av)
{
	int		i;
	char	*temp;

	i = 1;
	if (ac > 2)
	{
		while (av[i] && av[i + 1])
		{
			if (av[i][0] > av[i + 1][0])
			{
				temp = av[i];
				av[i] = av[i + 1];
				av[i + 1] = temp;
				i = 0;
			}
			i++;
		}
	}
}

int		main(int ac, char **av)
{
	int i;
	int j;

	if (ac > 1)
	{
		trier(ac, av);
		i = 1;
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				ft_putchar(av[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
