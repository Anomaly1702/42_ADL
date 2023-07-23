/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:04:40 by adatta-g          #+#    #+#             */
/*   Updated: 2023/07/23 13:18:01 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n_str;
	int		i;
	int		j;
	int		t_len;

	i = 0;
	j = 0;
	t_len = ft_strlen(s1) + ft_strlen(s2) +1;
	n_str = (char *) malloc(t_len);
	if (!n_str)
		return (NULL);
	while (s1[i])
	{
		n_str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		n_str[i] = s2[j];
		i++;
		j++;
	}
	n_str[i] = '\0';
	return (n_str);
}
