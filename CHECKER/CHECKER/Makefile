NAME = libchecker.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = main.c push_swap_utils.c algo.c \
		push_swap_next.c push_swap_tnext.c \
		push_swap_fnext.c c_algo.c

OBJS = $(SRCS:.c=.o)

%.o : %.c
		$(CC) $(CFLAGS) -o $@ -c $<

all : $(NAME)

$(NAME) : $(OBJS)
		make -C ../LIBFT_UTILS/
		make -C ../PRINTF/
		make -C ../LIST/
		ar rsc $@ $^

clean :
		make clean -C ../LIBFT_UTILS/
		make clean -C ../PRINTF/
		make clean -C ../LIST/
		rm -f $(OBJS)

fclean : clean
		make fclean -C ../LIBFT_UTILS/
		make fclean -C ../PRINTF/
		make fclean -C ../LIST/
		rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
