/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:52:22 by adatta-g          #+#    #+#             */
/*   Updated: 2023/06/05 11:22:50 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	str_len(char *string)
{
	int	i;

	i = 0;
	if (string == NULL)
		return (0);
	while (string[i])
		i++;
	return (i);
}

int	get_total_len(char **strs, int size)
{
	int	i;
	int	tot_len;

	i = 0;
	tot_len = 0;
	while (i < size)
	{
		tot_len += str_len(strs[i]);
		i++;
	}
	return (tot_len);
}

void	str_cpy(char *result, char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	cntr;

	i = 0;
	cntr = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			result[cntr++] = strs[i][j++];
		}
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
			{
				result[cntr++] = sep[j++];
			}
		}
		i++;
	}
	result[cntr] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		t_len;
	int		s_len;
	char	*result;

	t_len = 0;
	s_len = 0;
	result = malloc(sizeof(char) * (t_len + s_len + 1));
	if (result == NULL)
	{
		result[0] = '\0';
		return (result);
	}
	t_len = get_total_len(strs, size);
	s_len = str_len(sep);
	if (size < 1)
	{
		result[0] = '\0';
		return (result);
	}
	str_cpy(result, strs, size, sep);
	return (result);
}
