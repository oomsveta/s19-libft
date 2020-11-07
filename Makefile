NAME = libft.a
SRC = src/io/ft_putstr.c src/string/ft_bzero.c src/string/ft_memset.c src/string/ft_strcat.c src/string/ft_strlen.c src/ctype/ft_isdigit.c src/ctype/ft_isspace.c src/maths/ft_atoi.c src/maths/ft_isodd.c
OBJ  = ${SRC:c=o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	${CC} ${CFLAGS} -I include -c $^ -o $@

all: ${NAME}

${NAME}: ${OBJ}
	ar -rcs ${NAME} ${OBJ}

clean:
	rm -f src/*/*.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all, ${NAME}, clean, fclean, re
