# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tojimene <tojimene@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 20:56:10 by tojimene          #+#    #+#              #
#    Updated: 2022/04/05 21:51:01 by tojimene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	  ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_toupper.c \
	  ft_strlcpy.c ft_strlen.c ft_tolower.c ft_strchr.c ft_strncmp.c \
	  ft_strlcat.c ft_memchr.c ft_calloc.c ft_memcmp.c  ft_atoi.c \
	  ft_strnstr.c ft_strrchr.c ft_strdup.c ft_substr.c ft_strjoin.c \
	  ft_strtrim.c ft_itoa.c \
		
OBJ = $(SRC:.c=.o)

RM = rm -f
	
NAME = libft.a

CC = gcc

CFLAGS =  -Wall -Werror -Wextra

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib ${NAME}

.c.o: ${CC} ${CFALGS} -c $< -o ${<:.c=.o}

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re bonus

