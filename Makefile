#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcourtoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 17:13:05 by mcourtoi          #+#    #+#              #
#    Updated: 2022/03/14 19:29:17 by mcourtoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

SRCS = ./srcs/utils.c ./srcs/parse.c ./srcs/main.c \
		./srcs/swap.c ./srcs/checks.c ./srcs/push.c \
		./srcs/rotate.c ./srcs/reverse_rotate.c ./srcs/sort.c \
		./srcs/sort_small.c

LIBFT_PATH = ./Libft/
LIBFT = ${LIBFT_PATH}libft.a

OBJS = ${SRCS:.c=.o}

INC = ./includes

FLAGS = -Wall -Wextra -Werror -g3

.c.o:
	${CC} ${FLAGS} -I${INC} -c $< -o ${<:.c=.o}

${NAME}:    ${OBJS} ${LIBFT}
	    ${CC} ${FLAGS} ${OBJS} ${LIBFT} -o ${NAME}

all:    ${NAME}

${LIBFT}:
	make -C ${LIBFT_PATH}


clean:
	rm -f ${OBJS}
	make -C ${LIBFT_PATH} clean

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
