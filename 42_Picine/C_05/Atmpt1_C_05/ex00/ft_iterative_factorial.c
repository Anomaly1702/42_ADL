/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 12:45:27 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/29 19:13:56 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	fct;

	fct = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (nb > 0)
	{
		fct *= nb;
		nb--;
	}
	return (fct);
}
/*
int main()
{
	printf("%i,",ft_iterative_factorial(-20));
	printf(" %i,",ft_iterative_factorial(5));
	printf(" %d,",ft_iterative_factorial(10));
	//printf(" %i,",ft_iterative_factorial(54));
	//printf(" %i",ft_iterative_factorial(0));	
	return 0;
}*/
