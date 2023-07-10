/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:41:26 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/18 17:45:26 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void	ft_helper(int num1, int num2, int num3)
{
	if (num1 == 7 && num2 == 8 && num3 == 9)
	{
		ft_put_char(num1 + '0');
		ft_put_char(num2 + '0');
		ft_put_char(num3 + '0');
	}
	else
	{
		ft_put_char(num1 + '0');
		ft_put_char(num2 + '0');
		ft_put_char(num3 + '0');
		write(1, ", ", 2);
	}	
}

void	ft_print_comb(void)
{
	int		i;
	int		k;
	int		j;

	i = 0;
	while (i < 8)
	{
		j = i + 1;
		while (j < 10)
		{
			k = j + 1;
			while (k < 10)
			{
				ft_helper(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

/*
int main (void)
{
	ft_print_comb();
	return(0);
}
*/
