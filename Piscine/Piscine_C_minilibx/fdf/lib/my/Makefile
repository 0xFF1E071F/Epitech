##
## Makefile for Makefile in /home/dupard_e/rendus/Piscine_C_J11/lib/my
## 
## Made by Erwan Dupard
## Login   <dupard_e@epitech.net>
## 
## Started on  Mon Oct 20 08:44:59 2014 Erwan Dupard
## Last update Fri Oct 31 12:59:40 2014 Erwan Dupard
##

SRCS	= my_is_prime.c		\
	  my_getnbr.c		\
	  my_isneg.c		\
	  my_power_rec.c	\
	  my_putchar.c		\
	  my_put_nbr.c		\
	  my_putstr.c		\
	  my_revstr.c		\
	  my_showmem.c		\
	  my_showstr.c		\
	  my_sort_int_table.c	\
	  my_square_root.c	\
	  my_strcapitalize.c	\
	  my_strcat.c		\
	  my_strcmp.c		\
	  my_strcpy.c		\
	  my_str_isalpha.c	\
	  my_str_islower.c	\
	  my_str_isnum.c	\
	  my_str_isprintable.c	\
	  my_str_isupper.c	\
	  my_strlen.c		\
	  my_strlowcase.c	\
	  my_strncat.c		\
	  my_strncmp.c		\
	  my_strncpy.c		\
	  my_strstr.c		\
	  my_strupcase.c	\
	  my_swap.c		\
	  my_atoi.c		\
	  eval_expr.c		\
	  convert_base.c	\
	  my_getnbr_base.c	\
	  my_epurstr.c

CFLAGS	+= -Wextra -Wall -Werror
CFLAGS	+= -ansi -pedantic

NAME	= libmy.a

NEW_N	= ../libmy.a

OBJS	= $(SRCS:.c=.o)

HEADER  = my.h

NEW_H	= ../../include/my.h

CC	= gcc

RM	= rm -f

AR	= ar

all:	$(NAME)

$(NAME): $(OBJS)
	$(AR) rc $(NAME) $(OBJS)
	cp $(HEADER) $(NEW_H)
	cp $(NAME) $(NEW_N)
clean:
	$(RM) $(OBJS)
	$(RM) $(HEADER).gch

fclean: clean
	$(RM) $(NAME) $(NEW_N) $(NEW_H)
re: fclean all

.PHONY: all clean fclean re
