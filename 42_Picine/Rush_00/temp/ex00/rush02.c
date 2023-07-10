/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:52:27 by tsu               #+#    #+#             */
/*   Updated: 2023/05/20 15:59:00 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	helpr(int row, int nrow, int col, int ncol)
{
	if ((row == 0 && col == 0) || (row == 0 && col == ncol - 1))
	{
		ft_putchar('A');
	}
	else if ((row == nrow -1 && col == ncol -1) || (row == nrow -1 && col == 0))
	{
		ft_putchar('C');
	}
	else if (row == 0 || row == nrow -1)
	{
		ft_putchar('B');
	}
	else if (col == 0 || col == ncol -1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush02(int ncol, int nrow)
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
