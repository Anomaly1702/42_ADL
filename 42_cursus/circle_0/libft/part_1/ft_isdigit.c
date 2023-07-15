/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:40:56 by adatta-g          #+#    #+#             */
/*   Updated: 2023/07/15 19:52:35 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isdigit(int arg)
{
	if (arg >= 0 && arg <= 9)
		return (1);
	return (0);
}


