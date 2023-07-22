/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:23:02 by adatta-g          #+#    #+#             */
/*   Updated: 2023/07/22 16:25:47 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_isalpha(char c);
char			ft_toupper(char c);
int				ft_isdigit(int arg);
char			ft_tolower(char c);
char			ft_isalnum(char c);
char			*ft_strchr(const char *str, int c);
char			ft_isascii(char c);
char			ft_isprint(char c);
char			*ft_strrchr(const char *str, int c);
int				ft_strlen(char *str);
int				ft_strncmp(const char *str1, const char *str2, int n);
char			*ft_memset(char *str, char c, int n);
char			*ft_bzero(char *str, int n);
char			*ft_memchr(const char *str, int c, int n);
char			*ft_memcpy(char *dest, char *src, int n);
int				ft_memcmp(char *str1, char *str2, int n);
char			*ft_memmove(char *str1, char *str2, int n);
char			*ft_strnstr(char *str, char *fnd, int n);
char			*ft_strlcpy(char *dest, char *src, unsigned int n);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_atoi(char *str);

#endif