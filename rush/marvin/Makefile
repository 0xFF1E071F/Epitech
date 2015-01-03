##
## Makefile for marvin in /home/dupard_e/rendus/rush/marvin
## 
## Made by Erwan Dupard
## Login   <dupard_e@epitech.net>
## 
## Started on  Fri Jan  2 20:22:36 2015 Erwan Dupard
## Last update Sat Jan  3 11:24:50 2015 Erwan Dupard
##

CC	= gcc

RM 	= rm -f

CFLAGS 	+= -Werror -Wall -Wextra
CFLAGS	+= -ansi -pedantic

LDFLAGS += -I./include -L./lib -lmy

SRCS	= main.c      		\
	  syntaxe.c		\
	  type.c		\
	  parse.c		\
	  args.c		\

OBJS	= $(SRCS:.c=.o)

NAME	= marvin

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
