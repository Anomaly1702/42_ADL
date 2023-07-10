/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:49:21 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/24 17:03:04 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	detect(char c)
{
	int	flag;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		flag = 0;
	}
	else if (c >= '0' && c <= '9')
	{
		flag = 0;
	}
	else
	{
		flag = 1;
	}
	return (flag);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && flag)
		{
			str[i] = str[i] - 32;
			flag = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' && !flag)
		{
			str[i] = str[i] + 32;
		}
		flag = detect(str[i]);
		i++;
	}
	return (str);
}
/*
int main()
{
	char test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char test[] = "salut, \tcomment \ntu vas ?
   				42mots quara6nte-deux; cinquante+et+un";
	ft_strcapitalize(test);
	printf("Original : %s\n",test);
	ft_strcapitalize(test);
	printf("Modified : %s",test);
	return(0);
}
*/
