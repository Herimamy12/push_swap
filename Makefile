NAME = push_swap

LIBNAME = libpush_swap.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = main.c push_swap.c list_utils.c list_next.c list_tnext.c 

OBJS = $(SRCS:.c=.o)

%.o : %.c
		$(CC) $(CFLAGS) -o $@ -c $<

all : $(NAME) fclean

$(NAME) : $(LIBNAME)
		$(CC) -o $@ libpush_swap.a ./PRINTF/libftprintf.a $< 

$(LIBNAME) : $(OBJS)
		make -C ./PRINTF/
		ar rsc $@ $^

clean :
		make clean -C ./PRINTF/
		rm -f $(OBJS)

fclean : clean
		make fclean -C ./PRINTF/
		rm -f $(LIBNAME)

ffclean : clean fclean
		rm -f $(NAME)

re : ffclean all

.PHONY : all clean fclean ffclean re
