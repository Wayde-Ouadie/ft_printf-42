SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_unsigned.c \
	ft_puthexlow.c ft_puthexup.c ft_putadress.c ft_printf.c
OBJ = ${SRC:.c=.o}
NAME = libftprintf.a
LIB = ar rc
CC = cc
RM = rm -f
FLAG = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ}
	@echo "Compiling mandatory part."
	@${LIB} ${NAME} ${OBJ}

%.o:%.c ft_printf.h
	@${CC} ${FLAG} -c $<

clean:
	@echo "Removing objects files."
	@${RM} ${OBJ}

fclean: clean
	@echo "Removing libftprintf.a."
	@${RM} ${NAME}

re: fclean all