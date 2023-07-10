/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:07:29 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/27 19:23:53 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

int	hlpr(char *str, int cntr)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		if (cntr % 2 == 0)
			num = num + str[i] - 48;
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
	cntr = 0;
	if (str == NULL)
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			cntr++;
		i++;
	}
	num = hlpr(str + i, cntr);
	return (num);
}
/*
int	main(void)
{
	char	buffer_6[100];
	char	buffer_7[100];
	char	buffer_8[100];
	char	buffer_9[100];

	sprintf(buffer_6, "%d", INT_MAX);
	sprintf(buffer_7, "%d", INT_MIN);
	sprintf(buffer_8, " \r \t   \f --++-+--%d", INT_MAX);
	sprintf(buffer_9, "  \n  \v -+--+-%d", INT_MIN);
	//ualarm(100, 0);
	printf("%i,%i,%i,%i,%i,%i,%i,%i,%i",
		ft_atoi("44"),
		ft_atoi("-53"),
		ft_atoi(NULL),
		ft_atoi("–2147483648sdfsfs4534533"),
		ft_atoi("     -+++-+-+-+---5dsd"),
		ft_atoi(buffer_6),
		ft_atoi(buffer_7),
		ft_atoi(buffer_8),
		ft_atoi(buffer_9));
	//printf("%i",ft_atoi("-53"));
}*/
