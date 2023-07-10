/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:33:11 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/22 10:22:53 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{	
	int	i;

	i = size - 1;
	while (i >= 0)
	{
		ft_putchar(tab[i] + '0');
		i--;
	}
}
/*
int main(void)
{
	int x[] = {1,2,3,4,5,6};
	ft_rev_int_tab(x, 6);

	}*/
