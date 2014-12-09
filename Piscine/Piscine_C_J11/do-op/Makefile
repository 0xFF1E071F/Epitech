##
## Makefile for do-op in /home/dupard_e/rendus/Piscine_C_J11/do-op
## 
## Made by Erwan Dupard
## Login   <dupard_e@epitech.net>
## 
## Started on  Mon Oct 20 13:25:54 2014 Erwan Dupard
## Last update Mon Oct 20 16:15:28 2014 Erwan Dupard
##

SRCS	= ops.c    \
	  main.c   \

NAME	= do-op

RM	= rm -f

CC 	= gcc

CFLAGS	+= -Wextra -Wall -Werror
CFLAGS	+= -ansi -pedantic
CFLAGS 	+= -I../include

LDFLAGS	= -L../lib

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(CFLAGS) $(LDFLAGS) $(SRCS) -lmy

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all
