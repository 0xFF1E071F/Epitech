/*
** main.c for test in /home/dupard_e/rendus/Piscine_C_minilibx/lines
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Nov 12 17:18:56 2014 Erwan Dupard
** Last update Fri Nov 14 14:46:37 2014 Erwan Dupard
*/

#include <mlx.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_vectors.h"

# define TIME 400

void		usleep(int i);

int		rand_val(int a, int b)
{
  srand(time(NULL));
  return (rand() % (b - a) + a);
}

int		main()
{
  t_infos	s;
  int		color;
  t_vect	a;
  t_vect	b;
  
  s.mlx_ptr = mlx_init();
  s.win_ptr = mlx_new_window(s.mlx_ptr, 500, 500, "lolilol");
  a.x = 0;
  a.y = 0;
  b.x = 250;
  b.y = 250;
  while (1)
    {
      color = rand_val(0, 0x00FFFFFF);
      while (a.x != 500)
	{
      color = rand_val(0, 0x00FFFFFF);
	  draw_lines(s, a, b, color);
	  usleep(TIME);
	  a.x++;
	}
      while (a.y != 500)
	{
      color = rand_val(0, 0x00FFFFFF);
	  draw_lines(s, a, b, color);
	  a.y++;
	  usleep(TIME);
	}
      while (a.x != 0)
	{
      color = rand_val(0, 0x00FFFFFF);
	  draw_lines(s, a, b, color);      
	  a.x--;
	  usleep(TIME);
	}
      while (a.y != 0)
	{
      color = rand_val(0, 0x00FFFFFF);
	  draw_lines(s, a, b, color);
	  a.y--;
	  usleep(TIME);
	}
    }

  mlx_loop(s.win_ptr);
}
