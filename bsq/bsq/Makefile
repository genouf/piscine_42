# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aselnet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 18:07:04 by aselnet           #+#    #+#              #
#    Updated: 2022/02/22 18:07:24 by aselnet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCS = main.c basic_functions.c map_validity.c map_validity2.c \

OBJS = ${SRCS:.c=.o}

GCC = gcc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

.c.o:
		${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): 	${OBJS}
			${GCC} -o ${NAME} ${OBJS}

all: 		$(NAME)

clean: 	
	${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re:		fclean all
