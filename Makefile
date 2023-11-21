SRC = ft_putchar_bonus.c ft_putstr_bonus.c ft_putnbr_bonus.c ft_putnbr_unsigned_bonus.c \
	ft_puthexlow_bonus.c ft_puthexup_bonus.c ft_putadress_bonus.c ft_printf_bonus.c
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