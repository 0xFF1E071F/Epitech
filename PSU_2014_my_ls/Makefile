##
## Makefile for my_printf in /home/dupard_e/rendus/PSU_2014_my_printf
## 
## Made by Erwan Dupard
## Login   <dupard_e@epitech.net>
## 
## Started on  Fri Nov 14 12:58:35 2014 Erwan Dupard
## Last update Fri Nov 28 12:23:59 2014 Erwan Dupard
##

CC	= gcc

NAME	= my_ls

CFLAGS	+= -Wall -Werror -Wextra
CFLAGS	+= -pedantic -ansi

LDFLAGS	+= -L./include -L./lib -lmy

RM	= rm -f

SRCS	= main.c 	\
	  getopt.c	\
	  my_ls.c	\
	  misc.c	\
	  recursive.c	\

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
