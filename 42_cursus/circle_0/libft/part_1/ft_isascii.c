/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:12:43 by adatta-g          #+#    #+#             */
/*   Updated: 2023/07/16 12:19:21 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	isascii(char c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
