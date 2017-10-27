# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbaudron <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/08 18:41:39 by vbaudron          #+#    #+#              #
#    Updated: 2017/10/17 15:06:29 by vbaudron         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_lstadd.c ft_memcmp.c ft_putnbr.c ft_strdel.c ft_strmapi.c \
   	  ft_strstr.c ft_atoi.c ft_lstdel.c ft_memcpy.c  ft_putnbr_fd.c \
	  ft_strdup.c ft_strncat.c ft_strsub.c ft_bzero.c ft_lstdelone.c \
	  ft_memdel.c ft_putstr.c ft_strequ.c ft_strncmp.c ft_strtrim.c \
	  ft_isalnum.c ft_lstiter.c ft_memmove.c ft_putstr_fd.c ft_striter.c  \
	  ft_strncpy.c ft_tolower.c ft_isalpha.c ft_lstmap.c ft_memset.c \
	  ft_strcat.c ft_striteri.c ft_strnequ.c ft_toupper.c ft_isascii.c \
   	  ft_lstnew.c ft_putchar.c ft_strchr.c ft_strjoin.c ft_strnew.c \
	  ft_isdigit.c ft_memalloc.c ft_putchar_fd.c ft_strclr.c ft_strlcat.c \
  	  ft_strnstr.c ft_isprint.c ft_memccpy.c ft_putendl.c ft_strcmp.c \
	  ft_strlen.c  ft_strrchr.c ft_itoa.c ft_memchr.c ft_putendl_fd.c \
	  ft_strcpy.c ft_strmap.c ft_strsplit.c ft_ito_oct.c ft_power.c ft_ito_oct.c \
	  ft_putwchar.c ft_putnwstr.c ft_strjoin_free.c ft_atoimax_t.c ft_stradd_c_end.c \
	  ft_free_str2.c ft_putendl_2.c

OBJ_LIB = $(SRC:.c=.o)

all: $(NAME)

$(NAME) :
	gcc -c -Wall -Wextra -Werror $(SRC)
	ar rc $(NAME) $(OBJ_LIB)
	ranlib $(NAME)

clean :
	rm -rf $(OBJ_LIB)

fclean : clean
	rm -rf $(NAME)

re : fclean all
