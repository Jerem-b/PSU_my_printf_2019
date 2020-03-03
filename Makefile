##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compile my_printf lib
##

SRC =	my.h			\
	base.c			\
	base_case.c		\
	get_address.c		\
	lower_case_base.c	\
	my_printf.c		\
	my_putchar.c		\
	my_putstr.c		\
	my_revstr.c		\
	my_strlen.c		\
	othercase.c		\
	uppercase.c		\
	my_put_nbr.c		\
	easy_case.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a *.o

$(OBJ):	$(SRC)
	gcc -c $^

clean:
	rm -rf $(OBJ)
	rm -rf *.o
