/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:28:02 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/06 15:41:52 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	res = 1;
	while (nb > 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
