# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpuyo-ro <mpuyo-ro@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 19:12:27 by mpuyo-ro          #+#    #+#              #
#    Updated: 2024/04/23 19:40:59 by mpuyo-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
CC = gcc -c
CFLAGS = -Wall -Wextra -Werror
SOURCES = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c  ft_memmove.c ft_memset.c ft_strlcpy.c ft_strlen.c


OBJECTS = $(SOURCES:.c=.o)

$(NAME):
	$(CC) $(CFLAGS) $(SOURCES)
	-ar rcs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

all: $(NAME)

re: fclean all

.PHONY: all clean fclean re
