# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 10:49:59 by dpenas-u          #+#    #+#              #
#    Updated: 2022/03/25 10:36:50 by dpenas-u         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I.

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	  ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	  ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	  ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	  ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ_SRC = $(SRC:.c=.o)

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	 ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c

OBJ_BONUS = $(BONUS:.c=.o)

$(NAME): $(OBJ_SRC)
	ar rcs $(NAME) $(OBJ_SRC)

bonus: $(OBJ_SRC) $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_SRC) $(OBJ_BONUS)

all: $(NAME)

clean:
	rm -f $(OBJ_SRC) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(GCC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	$(GCC) -nostartfiles -shared -o libft.so $(OBJ_SRC)

.PHONY: all bonus fclean clean re
