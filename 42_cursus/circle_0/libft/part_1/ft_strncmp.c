/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:03:54 by adatta-g          #+#    #+#             */
/*   Updated: 2023/07/17 13:33:42 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strncmp(const char *str1, const char *str2, int n)
{
	int	i;

	i = 0;
	while (i <= n && (str1[i] || str2[i]))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);

}
