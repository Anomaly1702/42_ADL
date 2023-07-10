/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:31:48 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/20 14:01:40 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>
void	ft_putchar( char c);

void	helpr(int row, int nrow, int col, int ncol)
{
	if ((row == 0 && col == 0) || (row == 0 && col == ncol - 1))
	{
		ft_putchar('o');
	}
	else if (row == nrow - 1 && col == ncol - 1)
	{
		ft_putchar('o');
	}
	else if (row == nrow - 1 && col == 0)
	{
		ft_putchar('o');
	}
	else if (row == 0 || row == nrow - 1)
	{
		ft_putchar('-');
	}
	else if (col == 0 || col == ncol - 1)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush00(int ncol, int nrow)
{
	int	row;
	int	col;

	row = 0;
	if (ncol < 0 || nrow < 0)
	{
		return ;
	}
	while (row < nrow)
	{
		col = 0;
		while (col < ncol)
		{
			helpr(row, nrow, col, ncol);
			col ++;
		}
		ft_putchar('\n');
		row ++;
	}
}
