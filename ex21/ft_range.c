/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 21:44:49 by acourtin          #+#    #+#             */
/*   Updated: 2017/09/06 14:55:53 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;
	int n;

	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	i = 0;
	n = min;
	while (n < max)
	{
		tab[i] = n;
		n += 1;
		i += 1;
	}
	return (tab);
}
