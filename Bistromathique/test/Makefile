##
## Makefile for bistro in /home/dupard_e/rendus/Bistromathique/test
## 
## Made by Erwan Dupard
## Login   <dupard_e@epitech.net>
## 
## Started on  Wed Oct 29 19:21:06 2014 Erwan Dupard
## Last update Sat Nov  1 23:03:30 2014 Erwan Dupard
##

RM	= rm -f

CC	= gcc

LDFLAGS	= -L../lib -lmy

CFLAGS	+= -Wall -Wextra -Werror
CFLAGS	+= -pedantic -ansi

NAME	= test

SRCS	= test.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJS) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
