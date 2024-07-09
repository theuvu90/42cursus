CC = gcc
CFLAGS = -Wall -Wextra -Werror	
NAME = libftprintf.a 

SOURCES	=	ft_putchar.c ft_putstr.c ft_putnbr.c ft_strlen.c ft_putunsignbr.c \

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
