/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:10:14 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/24 20:35:03 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	checker(char c)
{
	int	flag;

	if (c >= 'a' && c <= 'z')
	{
		flag = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		flag = 1;
	}
	else
	{
		flag = 0;
	}
	return (flag);
}

int	ft_str_is_alpha(char *str)
{
	int	flag;
	int	i;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		flag = checker(str[i]);
		if (flag == 0)
		{
			return (0);
		}
		i++;
	}
	return (flag);
}
/*
int main()
{
	char test[] = "Anubhav1702";
	int x = ft_str_is_alpha(test);
	printf("%i",x);
	return(0);
}*/
