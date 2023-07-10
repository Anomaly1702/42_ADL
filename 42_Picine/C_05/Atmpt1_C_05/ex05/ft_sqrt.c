/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:25:08 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/29 19:25:11 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<limits.h>

int	ft_sqrt_recur(int nb, int i)
{
	if (nb > 2147395600)
		return (0);
	if (i * i == nb)
		return (i);
	if (i * i < nb)
		return (ft_sqrt_recur(nb, i + 1));
	return (0);
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_recur(nb, 0));
}
/*
int main()
{
	printf("%i ,", ft_sqrt(INT_MAX));
	printf("%i ,", ft_sqrt(INT_MIN));
	printf("%i ,", ft_sqrt(998001));
	printf("%i ,", ft_sqrt(49));
	return 0;
}
int	main(void)
{
	//ualarm(1000,0);
	printf("%i,%i,%i,%i,%i",
		ft_sqrt(4),
		ft_sqrt(64),
		ft_sqrt(0),
		ft_sqrt(-16),
		ft_sqrt(INT_MAX));
}*/
