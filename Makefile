Name = libft.a
all:
	gcc -Wall -Wextra -Werror -c *.c
	ar rc $(Name) *.o
	ranlib $(Name)

bonus:
	gcc  -Wall -Wextra -Werror -c -I./bonus/ *.c

clean:
	rm -f *.o

fclean: 
	rm -f $(Name)

re: fclean all clean