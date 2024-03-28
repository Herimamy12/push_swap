NAME = libpush_swap.a

CC = cc 

CFLAGS = -Wall -Werror -Wextra

SRCS = test.c

OBJS = $(SRCS:.c=.o)

%.o : %.c
		$(CC) $(CFLAGS) -o $@ -c $<

all : $(NAME)

$(NAME) : $(OBJS)
		make -C ./PRINTF/
		ar rsc $@ $^

clean :
		make clean -C ./PRINTF/
		rm -f $(OBJS)

fclean : clean
		make fclean -C ./PRINTF/
		rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
