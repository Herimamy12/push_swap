NAME = ../checker

CC = gcc

all : $(NAME)

$(NAME) :
		make -C ./CHECKER/
		$(CC) -o $@ \
		./CHECKER/libchecker.a \
		./PRINTF/libftprintf.a \
		./LIBFT_UTILS/libft.a \
		./LIST/list.a

clean :
		make clean -C ./CHECKER/

fclean : clean
		make fclean -C ./CHECKER/
		rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
