/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:21:42 by wmakaran          #+#    #+#             */
/*   Updated: 2023/07/23 13:13:51 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*allocate_str(int i, int n)
{
	char	*output;

	if (n < 0)
		output = (char *)malloc(sizeof(char) * (i + 2));
	else
		output = (char *)malloc(sizeof(char) * (i + 1));
	return (output);
}

static char	*buffer_to_output(char buffer[], int i, int n)
{
	char	*output;
	char	*ptr;

	output = allocate_str(i, n);
	if (!output)
		return (NULL);
	ptr = output;
	if (n < 0)
		*(ptr++) = '-';
	while (i > 0)
		*(ptr++) = buffer[--i];
	*ptr = '\0';
	return (output);
}

char	*ft_itoa(int n)
{
	char	buffer[100];
	int		i;
	long	lnb;

	lnb = n;
	if (n < 0)
		lnb = lnb * -1;
	i = 0;
	while (lnb >= 0)
	{
		buffer[i++] = (lnb % 10) + '0';
		lnb = lnb / 10;
		if (lnb == 0)
			break ;
	}
	return (buffer_to_output(buffer, i, n));
}
