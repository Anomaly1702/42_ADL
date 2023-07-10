/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:31:45 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/18 21:43:46 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

/*
int main (void)
{
	int num1=5;
	int num2=10;

	int *ptr1;
	int *ptr2;

	ptr1 = &num1;
	ptr2 = &num2;

	ft_swap(ptr1, ptr2);
	printf("num1 : %i| num2 %i",num1,num2);
	
}*/
