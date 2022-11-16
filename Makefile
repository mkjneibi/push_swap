# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mealjnei <mealjnei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 15:07:10 by mealjnei          #+#    #+#              #
#    Updated: 2022/11/16 14:22:47 by mealjnei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CC		= gcc
CFLAGS	= -g
RM		= rm -f

SRCS        = srcs/main.c srcs/err_utlis.c srcs/parsing.c srcs/op1.c srcs/op2.c \
				srcs/sorting.c srcs/sorting_utlis.c srcs/large.c srcs/free.c
LIBFT_PATH	=	./Libft
ECHO = -printf

LIBFT	=		./Libft/libft.a

INCLUDES =	-I ./includes

OBJS        = $(SRCS:.c=.o)

%.o : %.c
	${CC} ${CFLAGS} $(INCLUDES) -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	@ $(MAKE) -sC $(LIBFT_PATH)
	@ $(CC) $(CFLAGS) $(INCLUDES) $(OBJS) $(LIBFT) -o $(NAME)
	@ $(ECHO) "$(GRE)"
	@ $(ECHO) "\033[2J"
	@ $(ECHO) "PUAH_SWAP is ready to use\n"

all:		${NAME}

clean:
		rm -rf $(OBJS)
		@ $(MAKE) fclean -sC $(LIBFT_PATH)

fclean:		clean
		@ ${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

RED	= \033[1;31m
GRE	= \033[1;32m
YEL	= \033[1;33m
BLU	= \033[1;34m
MAG	= \033[1;35m
CYA	= \033[1;36m
NO_COL = \033[0m