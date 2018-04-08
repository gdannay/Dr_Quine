NAME_COLLEEN	=	Colleen

SRCS_COLLEEN	=	Colleen.c

OBJS_COLLEEN	=	$(SRCS_COLLEEN:.c=.o)

CC		=	clang

CFLAGS		=	-Wall -Werror -Wextra

all		:	$(NAME_COLLEEN)

$(NAME_COLLEEN)	:	$(OBJS_COLLEEN)
			$(CC) $(OBJS_COLLEEN) -o $(NAME_COLLEEN)

%.c		:	%.o
			$(CC) -o $@ -c $< $(CFLAGS)

clean		:
			rm -rf $(OBJS_COLLEEN)

fclean		:	clean
			rm -rf $(NAME_COLLEEN)

re		:	fclean all
