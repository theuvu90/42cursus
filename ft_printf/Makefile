CC = gcc
CFLAGS = -Wall -Wextra -Werror	
NAME = libftprintf.a 

SOURCES	=	ft_putchar.c ft_putstr.c ft_putnbr.c ft_strlen.c ft_putunsignbr.c \
		ft_putpoint.c ft_puthex_lower.c ft_puthex_upper.c ft_strchr.c \
		check_format.c ft_printf.c 

OBJ =	$(SOURCES:.c=.o)

$(NAME): $(OBJ) 
	ar -rcs $(NAME) $(OBJ) 

.PHONY:	all	clean	fclean	re

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

all: $(NAME)

re:	fclean all
