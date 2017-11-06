/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:29:27 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/06 17:36:46 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strcount(char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*res;
	int		i;

	res = malloc(sizeof(char) * (ft_strcount(src) + 1));
	i = 0;
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	return (res);
}
