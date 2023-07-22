/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:04:13 by adatta-g          #+#    #+#             */
/*   Updated: 2023/07/22 16:06:11 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1024);
	else if (c >= 'a' && c <= 'z')
		return (1024);
	return (0);
}
