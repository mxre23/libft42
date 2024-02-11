# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/28 01:39:29 by jmore-oj          #+#    #+#              #
#    Updated: 2024/02/11 05:17:53 by jmore-oj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	  ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	  ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	  ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c

HEADER = libft.h
OBJ = ${SRC:.c=.o}

all: ${NAME}

%.o: %.c libft.h
	${CC} ${CFLAGS} -c  $<

${NAME}: ${OBJ}
	ar rc ${NAME} ${OBJ}

clean: 
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

output: ${NAME}
	${CC} ${CFLAG} main.c ${NAME} -o output

.PHONY: all clean fclean sclean output  re
