##
## Makefile for wolf3d in /home/dupard_e/rendus/MUL_2014_wolf3d
## 
## Made by Erwan Dupard
## Login   <dupard_e@epitech.net>
## 
## Started on  Mon Dec  8 13:33:20 2014 Erwan Dupard
## Last update Tue Dec 16 16:16:36 2014 Erwan Dupard
##

CC	= gcc

RM 	= rm -f

CFLAGS 	+= -Werror -Wall -Wextra
CFLAGS	+= -ansi -pedantic

LDFLAGS += -I./include -L./lib -lmy
LDFLAGS += -L/usr/lib64 -lmlx -L/usr/lib64/X11 -lXext -lX11

SRCS	= main.c      		\
	  maze.c		\
	  event.c		\
	  images.c		\
	  player.c		\
	  base.c		\

OBJS	= $(SRCS:.c=.o)

NAME	= wolf3d

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
