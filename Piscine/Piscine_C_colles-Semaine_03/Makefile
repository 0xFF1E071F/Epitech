##
## Makefile for colle3 in /home/dupard_e/rendus/Piscine_C_colles-Semaine_03
## 
## Made by Erwan Dupard
## Login   <dupard_e@epitech.net>
## 
## Started on  Sat Oct 25 15:07:13 2014 Erwan Dupard
## Last update Sun Oct 26 09:59:56 2014 Erwan Dupard
##

CC	= gcc

RM	= rm -f

CFLAGS 	+= -Werror -Wall

LDFLAGS	+= -L./lib -lmy

SRCS	= main.c \
	  my_aff.c

OBJS	= $(SRCS:.c=.o)

NAME	= colle3

all:  $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)  $(LDFLAGS)

clean :
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
