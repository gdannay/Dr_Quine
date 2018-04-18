# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdannay <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/18 10:59:45 by gdannay           #+#    #+#              #
#    Updated: 2018/04/18 18:25:46 by gdannay          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_COLLEEN	=	Colleen

NAME_GRACE		=	Grace

NAME_SULLY		=	Sully

SRCS_COLLEEN	=	Colleen.c

SRCS_GRACE		=	Grace.c

SRCS_SULLY		=	Sully.c

OBJS_COLLEEN	=	$(SRCS_COLLEEN:.c=.o)

OBJS_GRACE		=	$(SRCS_GRACE:.c=.o)

OBJS_SULLY		=	$(SRCS_SULLY:.c=.o)

CFLAGS			=	-f macho64

all				:	$(NAME_COLLEEN) $(NAME_GRACE) $(NAME_SULLY)

$(NAME_COLLEEN)	:	$(OBJS_COLLEEN)
					$(CC) $(OBJS_COLLEEN) -o $(NAME_COLLEEN)

$(NAME_GRACE)	:	$(OBJS_GRACE)
					$(CC) $(OBJS_GRACE) -o $(NAME_GRACE)

$(NAME_SULLY)	:	$(OBJS_SULLY)
					clang $(OBJS_SULLY) -o $(NAME_SULLY)

%.o				:	%.s
					nasm $(CFLAGS) $< -o $@

clean			:
					rm -rf $(OBJS_COLLEEN)
					rm -rf $(OBJS_GRACE)
					rm -rf $(OBJS_SULLY)
					rm -rf Sully_*.o

fclean			:	clean
					rm -rf $(NAME_COLLEEN)
					rm -rf $(NAME_GRACE)
					rm -rf $(NAME_SULLY)
					rm -rf Sully_*

clean_sully		:
					rm -rf Sully_*

re				:	fclean all
