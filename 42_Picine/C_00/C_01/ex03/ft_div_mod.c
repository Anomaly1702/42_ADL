/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:58:15 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/18 22:29:06 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int num1 = 16;
	int num2 = 5;
	int quotient;
	int remainder;
	int *q;
	int *r;

	q = &quotient;
	r = &remainder;

	ft_div_mod(num1, num2, q, r);
	printf("Quotient %i| REMINDER %i",quotient,remainder);


}*/
