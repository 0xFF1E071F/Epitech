##
## Makefile for cat in /home/dupard_e/rendus/Piscine_C_J13/cat
## 
## Made by Erwan Dupard
## Login   <dupard_e@epitech.net>
## 
## Started on  Wed Oct 22 09:02:13 2014 Erwan Dupard
## Last update Thu Oct 23 14:12:38 2014 Erwan Dupard
##

RM	= rm -f

NAME	= cat

CFLAGS += -Wextra -Werror -Wall
CFLAGS += -ansi -pedantic
CFLAGS += -I../include

LDFLAGS	= -L../lib -lmy

CC	= gcc

SRCS	= my_cat.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
