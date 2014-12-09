##
## Makefile for isocube in /home/dupard_e/rendus/Piscine_C_minilibx/isocube
## 
## Made by Erwan Dupard
## Login   <dupard_e@epitech.net>
## 
## Started on  Tue Nov 11 15:12:06 2014 Erwan Dupard
## Last update Tue Nov 11 16:48:23 2014 Erwan Dupard
##

CC	= gcc

RM	= rm -f

SRCS	= draw_lines2.c	\
	  draw_lines.c 	\
	  main.c	\
	  isocube.c	\

LDFLAGS	+= -L./lib -I./include -lmy
LDFLAGS	+= -L/usr/lib64 -lmlx -L/usr/lib64/X11 -lXext -lX11

CFLAGS 	+= -Wall -Werror -Wextra
CFLAGS	+= -pedantic -ansi

OBJS	= $(SRCS:.c=.o)

NAME 	= isocube

all: $(NAME)

library:
	make -C lib/my re

$(NAME): library $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(LDFLAGS)

clean: 
	make -C lib/my clean
	$(RM) $(OBJS)

fclean: clean
	make -C lib/my fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean all re fclean
