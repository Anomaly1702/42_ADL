/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:50:23 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/25 13:34:54 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	str_size(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = str_size(src);
	while (i < size)
	{
		if (src[i])
			dest[i] = src[i];
		else
		{
			dest[i] = '\0';
			break ;
		}
		i++;
	}
	return (src_len);
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
