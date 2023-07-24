/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:13:46 by adatta-g          #+#    #+#             */
/*   Updated: 2023/07/24 11:17:13 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*empty_ptr;
	size_t	substr_len;
	char	*substr;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		empty_ptr = (char *)malloc(1);
		empty_ptr[0] = '\0';
		return (empty_ptr);
	}
	if ((start + len) > s_len)
		substr_len = s_len - start;
	else
		substr_len = len;
	substr = (char *) malloc((substr_len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, substr_len + 1);
	substr[substr_len] = '\0';
	return (substr);
}
