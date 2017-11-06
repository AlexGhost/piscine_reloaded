/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:38:57 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/06 17:52:03 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	if (max <= min)
		return (0);
	else
	{
		tab = malloc(sizeof(int) * (max + 1));
		i = 0;
		while (min + i < max)
		{
			tab[i] = min + i;
			i++;
		}
		return (tab);
	}
}
