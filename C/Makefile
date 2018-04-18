# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdannay <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/18 10:59:45 by gdannay           #+#    #+#              #
#    Updated: 2018/04/18 11:11:04 by gdannay          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_COLLEEN	=	Colleen

NAME_GRACE		=	Grace

SRCS_COLLEEN	=	Colleen.c

SRCS_GRACE		=	Grace.c

OBJS_COLLEEN	=	$(SRCS_COLLEEN:.c=.o)

OBJS_GRACE		=	$(SRCS_GRACE:.c=.o)

CC				=	clang

CFLAGS			=	-Wall -Werror -Wextra

all				:	$(NAME_COLLEEN) $(NAME_GRACE)

$(NAME_COLLEEN)	:	$(OBJS_COLLEEN)
					$(CC) $(OBJS_COLLEEN) -o $(NAME_COLLEEN)

$(NAME_GRACE)	:	$(OBJS_GRACE)
					$(CC) $(OBJS_GRACE) -o $(NAME_GRACE)

%.o				:	%.c
					$(CC) -o $@ -c $< $(CFLAGS)

clean			:
					rm -rf $(OBJS_COLLEEN)
					rm -rf $(OBJS_GRACE)

fclean			:	clean
					rm -rf $(NAME_COLLEEN)
					rm -rf $(NAME_GRACE)

re				:	fclean all
