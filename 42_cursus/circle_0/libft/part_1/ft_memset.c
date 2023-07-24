/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:35:16 by marvin            #+#    #+#             */
/*   Updated: 2023/07/24 11:28:46 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *input, int c, int n)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)input;
	while (n--)
	{
		str[i++] = (char)c;
	}
	return (str);
}
