/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:08:00 by marvin            #+#    #+#             */
/*   Updated: 2023/07/22 16:05:54 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const char *str, int c, int n)
{
	int	i;

	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == c)
			return (str + i);
		i ++;
	}
	return (NULL);
}
