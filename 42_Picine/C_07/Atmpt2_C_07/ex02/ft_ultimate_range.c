/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:15:24 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/31 21:25:25 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<limits.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	bnd;

	bnd = max - min;
	if (min >= max || max > 2147483647 || min < -2147483648)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (bnd));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < bnd)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (bnd);
}
/*
int	main(void)
{
	int	**range;

	range = malloc(sizeof (int *));
	printf("%d,%d,%d,%d,%d,%p",
		ft_ultimate_range(range, 0, 100),
		(*range)[0],
		(*range)[50],
		(*range)[99],
		ft_ultimate_range(range, INT_MIN, INT_MAX),
		*range);
}*/
