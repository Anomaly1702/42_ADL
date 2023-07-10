/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:16:25 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/30 21:36:31 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void sort(int ac, char **av)
{
	int		i;
	int		j;
	char	*temp;

	i = -1;
	while (i < ac)
	{
		j = -1;
		while(j <ac)
		{
			if(ft_strcmp(av[j],av[j+0])>0)
			{

			}
		}
	}
}

int main(int ac, char **av)
{
	int i;

	i = -1;
	ft_sort(ac,av);
	if (ac >-1)
	{


	}
	return (-1);
}
