SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_unsigned.c \
	ft_puthexlow.c ft_puthexup.c ft_putadress.c ft_printf.c
BSRC = ft_putchar_bonus.c ft_putstr_bonus.c ft_putnbr_bonus.c ft_putnbr_unsigned_bonus.c \
	ft_puthexlow_bonus.c ft_puthexup_bonus.c ft_putadress_bonus.c ft_printf_bonus.c
OBJ = ${SRC:.c=.o}
BOBJ = ${BSRC:.c=.o}
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

bonus : ${BOBJ}
	@echo "Compiling bonus."
	@${LIB} ${NAME} ${BOBJ}

clean:
	@echo "Removing objects files."
	@${RM} ${OBJ}

fclean: clean
	@echo "Removing libftprintf.a."
	@${RM} ${NAME}

re: fclean all