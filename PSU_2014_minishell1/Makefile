##
## Makefile for minishell1 in /home/dupard_e/rendus/PSU_2014_minishell1
## 
## Made by Erwan Dupard
## Login   <dupard_e@epitech.net>
## 
## Started on  Mon Dec 29 10:52:48 2014 Erwan Dupard
## Last update Fri Jan  2 09:11:05 2015 Erwan Dupard
##

CC	= gcc

RM 	= rm -f

CFLAGS 	+= -Werror -Wall -Wextra
CFLAGS	+= -ansi -pedantic

LDFLAGS += -I./include -L./lib -lmy
LDFLAGS += -L/usr/lib64 -lmlx -L/usr/lib64/X11 -lXext -lX11

SRCS	= main.c      		\
	  check.c		\
	  dir.c			\
	  my_cmds.c		\
	  my_cmds2.c		\

OBJS	= $(SRCS:.c=.o)

NAME	= mysh

all: $(NAME)

debug:
	$(CC) -g3 -o $(NAME)  $(SRCS) $(LDFLAGS) $(CFLAGS)

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
