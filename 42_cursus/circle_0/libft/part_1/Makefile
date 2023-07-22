NAME	= libft.a

CC		= gcc
CFLAG	= -Wall -Wextra -Werror
RM		= rm -f
AR		= ar
ARFLAGS	= crs
INCLUDES= ./libft.h
SRCS 	= 
			ft_isalpha.c \
			ft_toupper.c\
			ft_isdigit.c \
			ft_tolower.c \
			ft_isalnum.c\
			ft_strchr.c \
			ft_isascii.c\
			ft_isprint.c\
			ft_strrchr.c\
			ft_strlen.c \
			ft_strncmp.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memchr.c\
			ft_memcpy.c \
			ft_memcmp.c\
			ft_memmove.c \
			ft_strnstr.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_atoi.c 

OBJS = $(SRCS :.c=.o)
all: $(NAME)

%.o : %.c
		$(CC) $(CFLAG) -c $< -o $@
clean :
		$(RM) $(RMFLAG) $(OBJS)
fclean : clean
		$(RM) $(RMFLAG) $(NAME)

re : fclean all

$(NAME) : $(OBJS)
		$(AR) $(ARFLAGS) $@ $^

.PHONY : all clean fclean re