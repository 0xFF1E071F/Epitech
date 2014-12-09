##
## Makefile for my_printf in /home/dupard_e/rendus/PSU_2013_my_printf
## 
## Made by Erwan Dupard
## Login   <dupard_e@epitech.net>
## 
## Started on  Wed Nov  5 14:38:34 2014 Erwan Dupard
## Last update Tue Nov 25 18:00:31 2014 Erwan Dupard
##

CC	= gcc

RM 	= rm -f

CFLAGS 	+= -Werror -Wall -Wextra
CFLAGS	+= -ansi -pedantic

LDFLAGS += -I./include -L./lib -lmy
LDFLAGS += -L/usr/lib64 -lmlx -L/usr/lib64/X11 -lXext -lX11

SRCS	= main.c      \


OBJS	= $(SRCS:.c=.o)

NAME	= tri1

all: $(NAME)

library:
	make -C lib/my/ re

$(NAME): library $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(LDFLAGS)

clean : 
	$(RM) $(OBJS)
	make -C lib/my/ clean

fclean: clean
	$(RM) $(NAME)
	make -C lib/my/ fclean

re: fclean all

.PHONY: clean fclean all $(NAME)
