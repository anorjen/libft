NAME = libft.a
SRCS = ./*.c
INCL = ./*.h

all: $(NAME)

$(NAME): 
	gcc -Wall -Wextra -Werror -c $(SRCS) $(INCL)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
