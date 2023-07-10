/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:48:56 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/19 11:58:22 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int main(void)
{
	char x[] = "abcdef";
	int len = ft_strlen(x);

	int i = len-1;
	while(i>=0)
	{
		write(1,&x[i],1);
		i--;
	}
}
