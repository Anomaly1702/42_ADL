/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:29:42 by adatta-g          #+#    #+#             */
/*   Updated: 2023/07/24 11:43:01 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	hlpr(char *str, int cntr)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		if (cntr > 0)
			num = num + (str[i] - 48);
		else
			num = num - (str[i] - 48);
		i++;
	}
	return (num);
}

int	ft_atoi(char *str)
{
	int	i;
	int	cntr;
	int	num;

	i = 0;
	cntr = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			cntr = -1;
		i++;
	}
	num = hlpr(str + i, cntr);
	return (num);
}
