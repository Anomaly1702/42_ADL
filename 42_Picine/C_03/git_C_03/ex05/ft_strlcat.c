/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:11:04 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/25 18:10:00 by adatta-g         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				dest_len;

	i = 0;
	dest_len = str_len(dest);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (str_len(src) + dest_len);
}
/*
int main()
{
	char dest[700] = "Anubhav";
	char src[] = "is a human";
	printf("Returned Value %d\n",ft_strlcat(dest,src,4));
	printf("Concatinated String %s\n",dest);
	return 0;
}*/
