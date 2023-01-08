# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssonmez <ssonmez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 11:11:42 by ayavasgu          #+#    #+#              #
#    Updated: 2023/01/08 12:29:31 by ssonmez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SOURCES = \
	ft_printf.c ft_printhxa.c ft_printptr.c ft_printputchar.c ft_printputnbr.c \
	ft_printputstr.c ft_printunsigned.c ft_strlen.c
OBJECTS = $(SOURCES:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
all: $(NAME)
$(NAME): $(OBJECTS)
	ar -r $@ $?
%.o: %.c
	$(CC) -c $(CFLAGS) $?
clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
