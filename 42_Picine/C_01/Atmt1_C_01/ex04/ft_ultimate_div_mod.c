/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:30:33 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/18 22:51:35 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	q;
	int	r;

	q = *a / *b;
	r = *a % *b;
	*a = q;
	*b = r;
}
/*
int main (void)
{
	int num1 = 16;
	int num2 = 5;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("num1: %i | num2: %i" ,num1,num2);
	
}*/
