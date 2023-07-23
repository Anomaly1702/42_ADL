/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:02:29 by marvin            #+#    #+#             */
/*   Updated: 2023/07/23 13:39:01 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, int n)
{
	char	*destination;
	char	*source;
	int		i;

	i = 0;
	destination = (char *)dest;
	source = (char *)src;
	if (!n || destination == source)
		return (dest);
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}
