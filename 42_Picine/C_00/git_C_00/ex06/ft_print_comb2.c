/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:19:15 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/18 17:37:41 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(const char*array, int size)
{
	write(1, array, size);
}

void	cntr_hlpr(int num1, int num2)
{
	char	combination[6];

	if (num1 == 98 && num2 == 99)
	{
		combination[0] = num1 / 10 + '0';
		combination[1] = num1 % 10 + '0';
		combination[2] = ' ';
		combination[3] = num2 / 10 + '0';
		combination[4] = num2 % 10 + '0';
		ft_put_char(combination, 5);
	}
	else
	{
		combination[0] = num1 / 10 + '0';
		combination[1] = num1 % 10 + '0';
		combination[2] = ' ';
		combination[3] = num2 / 10 + '0';
		combination[4] = num2 % 10 + '0';
		combination[5] = ',';
		ft_put_char(combination, 6);
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			cntr_hlpr(num1, num2);
			num2++;
		}
		num1++;
	}
}
/*
int main() {
    ft_print_comb2();
    return(0);
}*/
