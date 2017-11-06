/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:43:23 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/06 18:43:25 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*newptr;
	int		i;
	int		taille;

	i = 0;
	taille = 0;
	while (src[taille] != '\0')
	{
		taille += 1;
	}
	newptr = (char*)malloc(sizeof(*newptr) * taille + 1);
	while (src[i] != '\0')
	{
		newptr[i] = src[i];
		i += 1;
	}
	newptr[i] = '\0';
	return (newptr);
}
