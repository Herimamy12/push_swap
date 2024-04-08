NAME = push_swap

LIBNAME = libpush_swap.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = main.c push_swap.c push_swap_utils.c

OBJS = $(SRCS:.c=.o)

%.o : %.c
		$(CC) $(CFLAGS) -o $@ -c $<

all : $(NAME) fclean

$(NAME) : $(LIBNAME)
		$(CC) -o $@ libpush_swap.a \
		./LIBFT_UTILS/libft.a \
		./LIST/list.a \
		./PRINTF/libftprintf.a $< 

$(LIBNAME) : $(OBJS)
		make -C ./LIBFT_UTILS/
		make -C ./LIST/
		make -C ./PRINTF/
		ar rsc $@ $^

clean :
		make clean -C ./LIBFT_UTILS/
		make clean -C ./LIST/
		make clean -C ./PRINTF/
		rm -f $(OBJS)

fclean : clean
		make fclean -C ./LIBFT_UTILS/
		make fclean -C ./LIST/
		make fclean -C ./PRINTF/
		rm -f $(LIBNAME)

ffclean : clean fclean
		rm -f $(NAME)

re : ffclean all

.PHONY : all clean fclean ffclean re
