/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:34:47 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/31 17:33:41 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	i = 0;
	if (min >= max)
		return (NULL);
	res = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
/*
int	main(void)
{
	int	*range;

	range = ft_range(0, 100);
	printf("%d,%d,%d,%p", range[0], range[50], range[99], ft_range(20, 20));
}*/
