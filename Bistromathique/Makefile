##
## Makefile for bistro in /home/dupard_e/rendus/Bistromathique
## 
## Made by Erwan Dupard
## Login   <dupard_e@epitech.net>
## 
## Started on  Mon Oct 27 14:18:00 2014 Erwan Dupard
## Last update Sat Nov  1 23:13:00 2014 Erwan Dupard
##

CC	= gcc

RM 	= rm -f

CFLAGS 	+= -Werror -Wall -Wextra
CFLAGS	+= -ansi -pedantic

LDFLAGS += -I./include -L./lib -lmy

SRCS	= main.c \
	  my_syntax.c \
	  bistromathique.c

OBJS	= $(SRCS:.c=.o)

NAME	= bistro

all: $(NAME)

library: 
	make -C ./lib/my

$(NAME): $(OBJS) library
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

clean : 
	$(RM) $(OBJS)
	make -C ./lib/my clean

fclean: clean
	$(RM) $(NAME)
	make -C ./lib/my fclean

re: fclean all

.PHONY: clean fclean all $(NAME)
