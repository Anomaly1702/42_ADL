/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 21:19:03 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/27 21:27:49 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_putnbr_base(int nbr, char *base)
{

	char			dig;
	unsigned int	temp_nbr;

	temp_nbr = nb;
	if (nb < 0)
	{
		write (1, "-", 1);
		temp_nbr = -1 * nb;
	}
	if (temp_nbr > 10)
		ft_putnbr(temp_nbr / 10);
	dig = (temp_nbr % 10) + '0';
	write (1, &dig, 1);
}
