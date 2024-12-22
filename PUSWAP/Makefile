NAME = ../push_swap

CC = gcc

all : $(NAME)

$(NAME) :
		make -C ./PUSH_SWAP/
		$(CC) -o $@ \
		./PUSH_SWAP/libpush_swap.a \
		./PRINTF/libftprintf.a \
		./LIBFT_UTILS/libft.a \
		./LIST/list.a

clean :
		make clean -C ./PUSH_SWAP/

fclean : clean
		make fclean -C ./PUSH_SWAP/
		rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
