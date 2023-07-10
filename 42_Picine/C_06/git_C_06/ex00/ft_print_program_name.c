/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:25:33 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/30 18:50:10 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac >= 1)
	{
		i = 0;
		while (av[0][i] != '\0')
		{
			ft_putchar(av[0][i]);
			i++;
		}
		ft_putchar('\n');
		return (0);
	}
	return (0);
}
