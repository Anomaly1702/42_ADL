/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:50:23 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/24 20:34:16 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i < size)
		{
			dest[i] = src[i];
		}
		i++;
	}
	dest[size] = '\0';
	return (i);
}
/*
int main()
{
	char src[] = "Anubhav";
	char dest[] = "";
	int length = 0;
	printf("Original : %s\n",dest);
	length = ft_strlcpy(dest,src,3);
	printf("Modified :%s\n",dest);
	printf("Returned Value : %d",length);
	return(0);
}*/
