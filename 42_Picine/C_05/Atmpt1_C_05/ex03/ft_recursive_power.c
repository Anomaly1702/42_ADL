/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:57:59 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/28 15:10:13 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
int main()
{
	printf("%i to pow of %i = %d ,",2,-3,ft_recursive_power(2,-3));
	printf("%i to pow of %i = %d ,",-2,0,ft_recursive_power(-2,0));
	printf("%i to pow of %i = %d ,",6,1,ft_recursive_power(6,1));
	printf("%i to pow of %i = %d ,",-3,3,ft_recursive_power(-3,3));
	printf("%i to pow of %i = %d ,",-2,4,ft_recursive_power(2,3));
}*/
