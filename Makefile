# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 10:49:59 by dpenas-u          #+#    #+#              #
#    Updated: 2022/03/21 12:50:52 by dpenas-u         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

GCC = gcc

CFLAGS = -Wall -Wextra -Werror -I.

SRC = ft_isalpha.c ft_isdigit.c

OBJ_SRC = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_SRC)
	ar rcs $(NAME) $(OBJ_SRC)

clean:
	rm -f $(OBJ_SRC)

fclean: clean
	rm -f $(NAME)

re: fclean all
