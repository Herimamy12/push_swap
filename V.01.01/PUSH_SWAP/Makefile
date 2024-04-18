NAME = push_swap

LIBNAME = libpush_swap.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = main.c push_swap.c push_swap_utils.c \
		push_swap_next.c push_swap_tnext.c \
		push_swap_fnext.c push_swap.c algo.c \
		algo_next.c c_algo.c c_algo_next.c \
		algo_send.c

OBJS = $(SRCS:.c=.o)

%.o : %.c
		$(CC) $(CFLAGS) -o $@ -c $<

all : $(NAME) fclean

$(NAME) : $(LIBNAME)
		$(CC) -o $@ libpush_swap.a \
		../PRINTF/libftprintf.a \
		../LIBFT_UTILS/libft.a \
		../LIST/list.a

$(LIBNAME) : $(OBJS)
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
		rm -f $(LIBNAME)

ffclean : clean fclean
		rm -f $(NAME)

re : ffclean all

.PHONY : all clean fclean ffclean re
