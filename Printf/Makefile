# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jael-mor <jael-mor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 05:20:37 by jael-mor          #+#    #+#              #
#    Updated: 2023/04/28 18:47:39 by jael-mor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
	ft_putchar.c \
	ft_hex.c \
	ft_putnbr.c \
	ft_putstr.c \
	ft_putptr.c \
	ft_putuns.c \
	

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o:%.c ft_printf.h
	cc $(FLAGS) -c $<

$(NAME):$(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
	
	



