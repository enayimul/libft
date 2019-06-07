# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enayimul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/22 10:35:40 by enayimul          #+#    #+#              #
#    Updated: 2019/06/07 10:07:48 by enayimul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC = *.c
OBJECT = *.o

All: $(NAME)

$(NAME):
	$(CC) -c $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJECT) 
	ranlib $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
