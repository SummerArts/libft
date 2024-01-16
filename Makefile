# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncouton <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 15:22:00 by ncouton           #+#    #+#              #
#    Updated: 2024/01/16 15:01:38 by ncouton          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

MY_SOURCES = ft_atoi.c ft_isprint.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c \
ft_bzero.c ft_itoa.c ft_putendl_fd.c ft_strjoin.c ft_strrchr.c ft_calloc.c \
ft_memchr.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c ft_isalnum.c ft_memcmp.c \
ft_putstr_fd.c ft_strlcpy.c ft_substr.c ft_isalpha.c ft_memcpy.c ft_split.c \
ft_strlen.c ft_tolower.c ft_isascii.c ft_memmove.c ft_strchr.c ft_strmapi.c \
ft_toupper.c ft_isdigit.c ft_memset.c ft_strdup.c ft_strncmp.c 

MY_OBJECTS = $(MY_SOURCES:.c=.o)

HEADER = libft.h

CC = cc
CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(MY_OBJECTS) $(HEADER)
	ar rcs $(NAME) $(MY_OBJECTS)
	#$(CC) $(CFLAGS) -o $(NAME) $(MY_OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(NAME)

.PHONY: clean fclean all
