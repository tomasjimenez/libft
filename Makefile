# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tojimene <tojimene@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 20:56:10 by tojimene          #+#    #+#              #
#    Updated: 2022/04/13 18:10:14 by tojimene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	  ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_toupper.c \
	  ft_strlcpy.c ft_strlen.c ft_tolower.c ft_strchr.c ft_strncmp.c \
	  ft_strlcat.c ft_memchr.c ft_calloc.c ft_memcmp.c  ft_atoi.c \
	  ft_strnstr.c ft_strrchr.c ft_strdup.c ft_substr.c ft_strjoin.c \
	  ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

BONUS = ft_lstnew.c ft_lstadd_front.c \

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(BONUS:.c=.o)

RM = rm -f
	
NAME = libft.a

CC = gcc

CFLAGS =  -Wall -Werror -Wextra

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib ${NAME}

B = .

bonus: $(B)

$(B):  $(OBJ) $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)
	ranlib ${NAME}


.c.o: ${CC} ${CFALGS} -c $< -o ${<:.c=.o}

all: $(NAME)

clean:
	$(RM) $(OBJ_BONUS) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re bonus

