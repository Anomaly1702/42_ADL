/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:07:34 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/28 14:22:12 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

//int hlpr(int num)

int	ft_recursive_factorial(int nb)
{
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main()
{
	printf("%i, ",ft_recursive_factorial(5));
	printf("%i, ",ft_recursive_factorial(0));
	printf("%i, ",ft_recursive_factorial(10));
	printf("%i, ",ft_recursive_factorial(-10));
}*/
