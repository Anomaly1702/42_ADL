#ifdef LIBFT_H
# definr LIBFT_H

# include<stdlib.h>
#include<unistd.h>

int	ft_isalpha(char c);
char	toupper(char c);
int	isdigit(int arg);
char	tolower(char c);
char	isalnum(char c);
char	*strchr(const char *str, int c);
char	isascii(char c);
char	isprint(char c);
char	*strrchr(const char *str, int c);
int	strlen(char *str);
int	strncmp(const char *str1, const char *str2, int n);
char	*memset(char *str, char c, int n);
char	*bzero(char *str, int n);
char	*memchr(const char *str, int c, int n);
char	*memcpy(char *dest, char *src, int n);
int	memcmp(char *str1, char *str2, int n);
char	*memmove(char *str1, char *str2, int n);
char	*ft_strnstr(char *str, char *fnd, int n);
char	*ft_strlcpy(char *dest, char *src, unsigned int n);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int	ft_atoi(char *str);

#endif