/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <adatta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:23:02 by adatta-g          #+#    #+#             */
/*   Updated: 2023/07/24 12:00:49 by adatta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_isalpha(int c);
int				ft_toupper(int c);
int				ft_isdigit(int arg);
int				ft_tolower(int c);
char			ft_isalnum(char c);
char			*ft_strchr(char *str, int c);
char			ft_isascii(int c);
int				ft_isprint(int c);
char			*ft_strrchr(char *str, int c);
int				ft_strlen(const char *str);
int				ft_strncmp(const char *str1, const char *str2, int n);
void			*ft_memset(void *input, int c, int n);
void			ft_bzero(void *string, int n);
void			*ft_memchr(void *str, int c, int n);
void			*ft_memcpy(void *dest, const void *src, int n);
int				ft_memcmp(char *str1, char *str2, int n);
void			*ft_memmove(void *str1, void *str2, int n);
char			*ft_strnstr(const char *str, const char *fnd, int n);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);
int				ft_atoi(const char *str);
char			*ft_itoa(int n);
void			ft_putnbr_fd(int n, int fd);
void			ft_putchar_fd(char c, int fd);
char			*ft_strdup(const char *str);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_substr(char const *s, unsigned int start, size_t len);
void			ft_putendl_fd(char *s, int fd);
void			ft_putstr_fd(char *s, int fd);
char			**ft_split(char const *s, char c);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
void			*ft_calloc(size_t count, size_t size);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));

#endif