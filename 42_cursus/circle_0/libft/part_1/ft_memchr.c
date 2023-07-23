/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:08:00 by marvin            #+#    #+#             */
/*   Updated: 2023/07/23 13:55:38 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *str, int c, int n)
{
	unsigned char	*string;
	unsigned char	ch;
	int				i;

	i = 0;
	string = (unsigned char *)str;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (string[i] == ch)
			return (string + i);
		i ++;
	}
	return (NULL);
}
