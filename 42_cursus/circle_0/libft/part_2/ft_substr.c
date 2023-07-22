/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_substr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:13:46 by adatta-g          #+#    #+#             */
/*   Updated: 2023/07/22 11:03:40 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	strlen(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, int len)
{
	char	*substr;
	int		i;
	int		j;
	int		s_len;

	s_len = strlen(s);
	substr = (char *) malloc(s_len - start);
	i = 0;
	j = 0;
	if (!substr)
		return (NULL);
	while (s[i])
	{
		if (i >= start)
		{
			substr[j] = s[i];
			j++;
		}
		i++;
	}
	substr[j] = '\0';
	return (substr);
}
