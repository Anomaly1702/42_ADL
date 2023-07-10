/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:57:25 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/29 19:40:03 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<limits.h>
#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	//printf("%i",ft_is_prime(1));
	printf("%i,%i,%i,%i",
		ft_is_prime(4),
		ft_is_prime(1),
		ft_is_prime(5),
		ft_is_prime(-2));
}*/
