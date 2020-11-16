NAME = libft.a
SRC  = src/array/lw_insrt_sort.c src/io/ft_putstr.c src/string/ft_bzero.c src/string/ft_memchr.c src/string/ft_memcpy.c src/string/ft_memset.c src/string/lw_strcat.c src/string/ft_strncmp.c src/string/ft_strdup.c src/string/ft_strlcat.c src/string/ft_strlen.c src/ctype/ft_isalnum.c src/ctype/ft_isalpha.c src/ctype/ft_isdigit.c src/ctype/lw_isspace.c src/maths/ft_atoi.c src/maths/lw_isodd.c
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
