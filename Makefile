SRC	=	*.c
FLAGS	=	-Wall -Wextra -Werror
NAME	=	libft.a
OBJ	=	*.o

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean:clean
	rm -f $(NAME)

re:fclean all
