# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enayimul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/22 10:35:40 by enayimul          #+#    #+#              #
#    Updated: 2019/05/22 10:43:51 by enayimul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
C = -c
FLAGS = -Wall -Wextra -Werror
SRC = *.c
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
