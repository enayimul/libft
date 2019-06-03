# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enayimul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/22 10:35:40 by enayimul          #+#    #+#              #
#    Updated: 2019/06/03 16:59:17 by enayimul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
C = -c
FLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c \ ft_bzero.c \ ft_isalnum.c \ ft_isalpha.c \ ft_isascii.c \ ft_isdigit.c \ ft_isprint.c \ ft_memcpy.c \ ft_memset.c \ ft_putchar.c \ ft_putchar_fd.c \ ft_strcat.c \ ft_strcmp.c \ ft_strcpy.c \ ft_strdup.c \ ft_strlen.c \ ft_strncat.c \ ft_strncmp.c \ ft_strstr.c \ ft_tolower.c \ ft_toupper.c
OBJ = *.o
AR = ar rc

All:
	$(CC) $(FLAGS) $(C) $(SRC)
	$(AR) $(NAME) $(OBJ)

clean:
	rm -r *.o

fclean: clean
	rm $(NAME)

re: fclean all
