# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hboukili <hboukili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 03:09:52 by hboukili          #+#    #+#              #
#    Updated: 2021/11/25 04:35:28 by hboukili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
OBJS = ${SRC:.c=.o}
FLAGS = -Wall -Wextra -Werror
ARG = -c
SRC = ft_printf.c ft_adress.c ft_printhexa.c ft_putchar.c ft_putnbr.c ft_putnbr2.c ft_putstr.c

all : $(NAME)
$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	
$(OBJS):
	$(CC) $(FLAGS) $(SRC) $(ARG)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all