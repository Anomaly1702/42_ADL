/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:03:41 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/31 21:19:11 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

unsigned int	str_len(char *str)
{
	unsigned int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		len;

	len = str_len(src);
	dest = malloc(sizeof(char) * (str_len(src) + 1));
	if (dest == NULL || src == NULL)
	{
		dest = NULL;
		return (NULL);
	}
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	printf("%s,%s\n",
		ft_strdup("hello"),
		ft_strdup(""));
	printf("%s\n",strdup(""));
	free(ft_strdup(""));
	free(ft_strdup(NULL));
}*/
