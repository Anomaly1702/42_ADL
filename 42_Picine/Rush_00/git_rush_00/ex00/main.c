/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 10:53:27 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/20 16:43:00 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include "ft_putchar.c"
//#include "rush00.c"
void	rush00(int col, int row);
void	rush01(int col, int row);
void	rush02(int col, int row);
void	rush03(int col, int row);
void	rush04(int col, int row);

int	main(void)
{
	rush00(5, 3);
	write(1, "\n", 1);
	rush00(5, 1);
	write(1, "\n", 1);
	rush00(1, 1);
	write(1, "\n", 1);
	rush00(1, 5);
	write(1, "\n", 1);
	rush00(4, 4);
	write(1, "\n", 1);
	return (0);
}
/*
	write(1,'1', 1);
	rush01(5, 3);
	write(1, "\n", 1);
	rush01(5, 1);
	write(1, "\n", 1);
	rush01(1, 1);
	write(1, "\n", 1);
	rush01(1, 5);
	write(1, "\n", 1);
	rush01(4, 4);
	write(1, "\n", 1);

	write(1,'2', 1);
	rush02(5, 3);
	write(1, "\n", 1);
	rush02(5, 1);
	write(1, "\n", 1);
	rush02(1, 1);
	write(1, "\n", 1);
	rush02(1, 5);
	write(1, "\n", 1);
	rush02(4, 4);
	write(1, "\n", 1);


	write(1,'3', 1);
	rush03(5, 3);
	write(1, "\n", 1);
	rush03(5, 1);
	write(1, "\n", 1);
	rush03(1, 1);
	write(1, "\n", 1);
	rush03(1, 5);
	write(1, "\n", 1);
	rush03(4, 4);
	write(1, "\n", 1);

	write(1,'4', 1);
	rush04(5, 3);
	write(1, "\n", 1);
	rush04(5, 1);
	write(1, "\n", 1);
	rush04(1, 1);
	write(1, "\n", 1);
	rush04(1, 5);
	write(1, "\n", 1);
	rush04(4, 4);
	write(1, "\n", 1);
	return (0);
}*/
