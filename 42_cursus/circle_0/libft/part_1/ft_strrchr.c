/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:01:36 by adatta-g          #+#    #+#             */
/*   Updated: 2023/07/22 16:03:33 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	flag;

	i = 0;
	flag = NULL;
	while (str[i])
	{
		if (str[i] == c)
			flag = i;
		i++;
	}
	if (flag)
		return (str + flag);
	return (NULL);
}
