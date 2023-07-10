/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 13:44:27 by kshore            #+#    #+#             */
/*   Updated: 2023/05/20 14:38:17 by kshore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	helpr(int row, int nrow, int col, int ncol)
{
	if (row == 0 && col == 0)
	{
		ft_putchar('A');
	}
	else if (row == 0 && col == ncol - 1)
	{
		ft_putchar('C');
	}
	else if (row == nrow - 1 && col == ncol - 1)
	{
		ft_putchar('A');
	}
	else if (row == nrow -1 && col == 0)
	{
		ft_putchar('C');
	}
	else if ((row == 0 || row == nrow - 1) || (col == 0 || col == ncol - 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush04(int ncol, int nrow)
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
