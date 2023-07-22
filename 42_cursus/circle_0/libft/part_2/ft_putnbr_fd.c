/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:07:56 by adatta-g          #+#    #+#             */
/*   Updated: 2023/07/22 13:27:07 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	t_num;

	t_num = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		t_num = -1 * nb;
	}
	if (9 < t_num)
		ft_putnbr_fd(t_num / 10, fd);
	ft_putchar_fd(t_num % 10 + '0', fd);
}
