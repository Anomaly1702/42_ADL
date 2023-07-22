/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:33:54 by adatta-g          #+#    #+#             */
/*   Updated: 2023/07/22 15:10:39 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>

unsigned int	in_set(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

int	get_size(char *s1, char *srt_chr, char *end_chr)
{
	int		size;

	if (!*s1 || srt_chr == end_chr)
		size = 2;
	else
		size = end_chr - srt_chr + 2;
	return (size);
}

char	*ft_strtrim(char *s1, char *set)
{
	int		i;
	int		size;
	char	*srt_chr;
	char	*end_chr;
	char	*opt_str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && in_set(s1[i], set))
		i++;
	srt_chr = (char *)&s1[i];
	i = ft_strlen(s1) - 1;
	if (i != -1)
		while (i > -1 && in_set(s1[i], set))
			i--;
	end_chr = (char *)&s1[i];
	size = get_size(s1, srt_chr, end_chr);
	opt_str = (char *)malloc(size);
	if (!opt_str)
		return (NULL);
	ft_strlcpy(opt_str, opt_str, size);
	return (opt_str);
}


int	main(void)
{
	printf("%s", ft_strtrim("lorem ipsum dolor sit am", "oa"));
	return (0);
}
