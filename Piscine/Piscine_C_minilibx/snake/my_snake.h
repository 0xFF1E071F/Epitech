/*
** my_snake.h for my_snake.h in /home/dupard_e/rendus/Piscine_C_minilibx/test3
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Oct 24 08:44:31 2014 Erwan Dupard
** Last update Fri Oct 24 09:01:58 2014 Erwan Dupard
*/
#ifndef MY_SNAKE_H_
# define MY_SNAKE_H_

#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_snake
{
  t_vect	pos;
  int		isalive;
  s_snake	*next;
}		t_snake;

typedef struct	s_infos
{
  void		*mlx_ptr;
  void		*win_ptr;
}		t_infos;

typedef struct	s_vect
{
  int		x;
  int		y;
}		t_vect;

#endif /* !MY_SNAKE_H_ */
