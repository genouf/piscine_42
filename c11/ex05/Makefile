# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: genouf <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/18 14:18:45 by genouf            #+#    #+#              #
#    Updated: 2022/02/19 09:59:37 by genouf           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c core.c operator_fonctions.c 
OBJS = ${SRCS:.c=.o}
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = do-op
RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

${OBJS}:%.o:%.c
	${CC} ${CFLAGS} -c $< -o $@ 	

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all
