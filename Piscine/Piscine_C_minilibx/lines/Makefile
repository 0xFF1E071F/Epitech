##
## Makefile for draw_lines in /home/dupard_e/rendus/Piscine_C_minilibx/lines
## 
## Made by Erwan Dupard
## Login   <dupard_e@epitech.net>
## 
## Started on  Tue Nov  4 13:47:05 2014 Erwan Dupard
## Last update Tue Nov  4 14:18:08 2014 Erwan Dupard
##

CC	= gcc

RM	= rm -f

SRCS	= draw_lines.c \
	  main.c

LDFLAGS	+= -L/usr/lib64 -lmlx -L/usr/lib64/X11 -lXext -lX11

CFLAGS 	+= -Wall -Werror -Wextra
CFLAGS	+= -pedantic -ansi

OBJS	= $(SRCS:.c=.o)

NAME 	= linestest

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(LDFLAGS)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean all re fclean
