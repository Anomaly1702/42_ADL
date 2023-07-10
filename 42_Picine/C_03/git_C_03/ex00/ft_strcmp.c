/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:12:56 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/24 22:27:05 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%i %i %i %i",
		ft_strcmp("this is a test string", "this is a test string"),
		ft_strcmp("this is a test\0string", "this is a test"),
		ft_strcmp("hello world", "hello") > 0,
		ft_strcmp("hello", "hello world") < 0);
}*/
