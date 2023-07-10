/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:55:30 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/27 19:58:00 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

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

char	*ft_strstr(char *str, char *to_find)
{
	int	f_l;
	int	i;
	int	j;
	int	s_l;

	i = 0;
	f_l = str_len(to_find);
	s_l = str_len(str);
	while (str[i] != '\0' && i < (s_l - f_l))
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (j < f_l)
			{
				if (str[i + j] != to_find[j])
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
/*
int main ()
{
	char super_string[] = "this is America Bro";
	char find[] = "America";
	
	printf("%s", ft_strstr(super_string, find));
	return 0;
}*/
