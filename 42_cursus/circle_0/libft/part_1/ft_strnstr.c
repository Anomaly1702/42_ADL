/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:34:12 by adatta-g          #+#    #+#             */
/*   Updated: 2023/07/24 12:01:18 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *fnd, int n)
{
	int	i;
	int	j;

	i = 0;
	if (*fnd == '\0' || fnd == NULL)
		return ((char *)str);
	while (str[i] != '\0' && i <= n)
	{
		j = 0;
		while (fnd[j] == str[i + j] && i + j < n)
		{
			if (fnd[j + 1] == '\0')
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
