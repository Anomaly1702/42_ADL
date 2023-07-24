/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:01:36 by adatta-g          #+#    #+#             */
/*   Updated: 2023/07/24 09:59:24 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int		i;
	char	find;

	i = 0;
	find = (unsigned char)c;
	while (str[i])
		i++;
	while (i > -1)
	{
		if (str[i] == find)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
