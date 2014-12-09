##
## Makefile for my_printf in /home/dupard_e/rendus/PSU_2013_my_printf
## 
## Made by Erwan Dupard
## Login   <dupard_e@epitech.net>
## 
## Started on  Wed Nov  5 14:38:34 2014 Erwan Dupard
## Last update Sat Dec  6 19:45:44 2014 Erwan Dupard
##

CC	= gcc

RM 	= rm -f

CFLAGS 	+= -Werror -Wall -Wextra
CFLAGS	+= -ansi -pedantic

LDFLAGS += -I./include -L./lib -lmy
LDFLAGS += -L/usr/lib64 -lmlx -L/usr/lib64/X11 -lXext -lX11

SRCS	= main.c      	\
	  my_gettab.c 	\
	  draw_fdf.c  	\
	  draw_lines.c	\
	  images.c	\

OBJS	= $(SRCS:.c=.o)

NAME	= fdf

all: $(NAME)

library:
	make -C lib/my/

library-re:
	make -C lib/my/ re

$(NAME): library $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(LDFLAGS)

clean : 
	$(RM) $(OBJS)
	make -C lib/my/ clean

fclean: clean
	$(RM) $(NAME)
	make -C lib/my/ fclean

re: fclean library-re all

.PHONY: clean fclean all library library-re $(NAME)
