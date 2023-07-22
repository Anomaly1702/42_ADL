/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:44:21 by marvin            #+#    #+#             */
/*   Updated: 2023/07/22 20:44:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_len(int num)
{
	int	len;

	len = 0;
	if (num <= 0)
		len = 1;
	while (num !=0)
	{
		num = num / 10; 
		len ++;
	}
	return (len);
}

char	*ft_itoa(int num)
{
	int		i;
	int		n_len;
	int		sign;
	char	*str;

	i = 0;
	n_len = num_len(num);
	sign = ((num < 0) ? -1 : 1);
	str = (char *)malloc(sizeof(char) * n_len + 1);
	if(!str)
		return (NULL);
	str[n_len--] = '\0';
	while(n_len >= 0)
	{
		str[n_len] = num % 10 + '0';
		num /=10;
		n_len--;
	}
	if (sign == -1)
	return (str);
}
