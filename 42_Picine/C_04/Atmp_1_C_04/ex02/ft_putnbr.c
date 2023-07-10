/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 10:58:14 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/28 12:17:06 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	t_num;

	t_num = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		t_num = -1 * nb;
	}
	if (9 < t_num)
		ft_putnbr(t_num / 10);
	ft_putchar(t_num % 10 + '0');
}
/*
int	main(void)
{
	ft_putnbr(5);
	//ft_putnbr(-5);
	//ft_putnbr(INT_MAX);
	ft_putnbr(INT_MIN);
	//ft_putnbr(INT_MIN + 1);
}*/
