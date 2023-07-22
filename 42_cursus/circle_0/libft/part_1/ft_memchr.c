/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:08:00 by marvin            #+#    #+#             */
/*   Updated: 2023/07/20 20:08:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char    *memchr(const char *str, int c, int n)
{
    int i;

    i = 0;
    while(str[i] && i <n)
    {
        if(str[i] == c)
            return (str + i);
        i ++;
    }
    return NULL;
}
