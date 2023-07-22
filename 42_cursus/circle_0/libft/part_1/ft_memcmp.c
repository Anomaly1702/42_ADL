/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:20:07 by marvin            #+#    #+#             */
/*   Updated: 2023/07/22 16:05:47 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(char *str1, char *str2, int n)
{
	int	i;

	i = 0;
	while (i <= n && (str1[i] || str2[i]))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}
