/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:13:49 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/06 18:13:52 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;
	int taille;

	i = 0;
	taille = 0;
	while (i < length && tab[i])
	{
		taille += 1;
		i += 1;
	}
	i = 0;
	while (i < taille)
	{
		f(tab[i]);
		i += 1;
	}
}
