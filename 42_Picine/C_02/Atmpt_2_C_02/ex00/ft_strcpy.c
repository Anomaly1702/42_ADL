/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:29:26 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/24 16:58:42 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char src[] = "Anubhav";
	char dest[] = "";
	//char new[] = "";

	ft_strcpy(dest, src);
	printf("Value of dest %s\n", dest);
	//new = ft_strcpy(dest, src);
	//char dest[] = "";
	//printf("New str : %s\n", ft_strcpy(dest,src));
	return(0);
}*/
