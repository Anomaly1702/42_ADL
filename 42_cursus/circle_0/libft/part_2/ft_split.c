/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:29:38 by marvin            #+#    #+#             */
/*   Updated: 2023/07/22 20:29:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			i++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (i);
}

static char	*dup_wrd(const char *str, int srt, int fin)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((fin - srt + 1) * sizeof(char));
	while (srt < fin)
		word[i++] = str[srt++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s,char c)
{
	int	i;
	int	j;
	int		index;
	char	**split;

	if (!s || !(split = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = dup_wrd(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}