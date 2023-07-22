/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:34:12 by adatta-g          #+#    #+#             */
/*   Updated: 2023/07/22 10:10:23 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	str_len(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strnstr(char *str, char *fnd, int n)
{
	int	f_l;
	int	i;
	int	j;
	int	s_l;

	i = 0;
	f_l = str_len(fnd);
	s_l = str_len(str);
	while (str[i] != '\0' && i < (s_l - f_l) && i <= n)
	{
		j = 0;
		if (str[i] == fnd[j])
		{
			while (j < f_l)
			{
				if (str[i + j] != fnd[j])
					break ;
				j++;
			}
			if (j == f_l)
				return (str + i);
		}
		i++;
	}
	return (NULL);
}
