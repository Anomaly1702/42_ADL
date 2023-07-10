/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 11:15:16 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/22 14:02:55 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_sort( int j, int *tab)
{
	int	temp;

	if (tab[j] > tab[j + 1])
	{
		temp = tab[j];
		tab[j] = tab[j + 1];
		tab[j + 1] = temp;
	}
	return ;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			ft_sort(j, tab);
			j++;
		}
		i++;
	}
	return ;
}
/*
int main()
{
	int x[] = {9,8,7,6,5,4,3,2,1};
	ft_sort_int_tab(x, 9);
	for (int i = 0; i < 9; i++)
		printf("%d ", x[i]);
	return(0);
}*/
