/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:47:32 by marvin            #+#    #+#             */
/*   Updated: 2023/07/24 11:45:56 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, void *str2, int n)
{
	int		i;
	char	*dest;
	char	*src;

	i = 0;
	dest = (char *)str1;
	src = (char *)str2;
	if (dest == src)
		return (str1);
	if (dest > src)
	{
		while (++i <= n)
			dest[n - i] = src[n - i];
	}
	else
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
