# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/03 16:23:10 by mcourtoi          #+#    #+#              #
#    Updated: 2022/03/27 18:42:46 by mcourtoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SRCS = ft_atoi.c \
       ft_isdigit.c \
       ft_split.c ft_strchr.c ft_strdup.c \
       ft_striteri.c ft_strjoin.c \
       ft_strlcpy.c ft_strlen.c \
       ft_strncmp.c \

BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \

OBJS = ${SRCS:.c=.o}

INC = ../includes

BONUSOBJS = ${BONUS:.c=.o}

FLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${FLAGS} -I${INC} -c $< -o ${<:.c=.o}

all:	 ${NAME}

${NAME}:    ${OBJS} ${BONUSOBJS}
	ar rcs ${NAME} ${OBJS} ${BONUSOBJS}

bonus: ${OBJS} ${BONUSOBJS}
	ar rcs $(NAME) ${OBJS} ${BONUSOBJS}

clean:
	rm -f ${OBJS} ${BONUSOBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
