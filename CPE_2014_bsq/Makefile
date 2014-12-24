##
## Makefile for bsq in /home/dupard_e/rendus/CPE_2014_bsq
## 
## Made by Erwan Dupard
## Login   <dupard_e@epitech.net>
## 
## Started on  Mon Dec 15 10:13:55 2014 Erwan Dupard
## Last update Tue Dec 23 10:46:26 2014 Erwan Dupard
##

CC	= gcc

NAME	= bsq

CFLAGS	+= -Wall -Werror -Wextra
CFLAGS	+= -pedantic -ansi

LDFLAGS	+= -L./include -L./lib -lmy

RM	= rm -f

SRCS	= main.c 	\
	  gettab.c	\
	  carre.c	\
	  check.c	\

OBJS	= $(SRCS:.c=.o)



all: library $(NAME)

library: 
	make -C lib/my

library-re:
	make -C lib/my re

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(LDFLAGS)

clean:
	make -C lib/my clean
	$(RM) $(OBJS)

fclean: clean
	make -C lib/my fclean
	$(RM) $(NAME)

re: fclean library-re all


.PHONY: library all clean fclean 
