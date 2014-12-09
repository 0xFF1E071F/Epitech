/*
** main.c for test6 in /home/dupard_e/rendus/Piscine_C_minilibx/test6
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Nov  5 11:23:05 2014 Erwan Dupard
** Last update Wed Nov  5 11:35:43 2014 Erwan Dupard
*/

#include "my_inf.h"
#include <mlx.h>

int		l;
int		L;
int		rand_color;

int		key_pressed(int key, void *param)
{
  t_infos	*s;

  s = (t_infos *)param;
  l += 5;
  L += 5;
  rand_color = rand_val(0, 0x00FFFFFF);
  draw_filled_box(s->mlx_ptr, s->win_ptr, 0, 0, l, L, rand_color);
  return (0);
}

int		main()
{
  t_infos	s;

  l = 0;
  L = 0;
  rand_color = 0x00FFFFFF;
  s.mlx_ptr = mlx_init();
  s.win_ptr = mlx_new_window(s.mlx_ptr, 500, 500, "test6");
  mlx_key_hook(s.win_ptr, key_pressed, &s);
  mlx_loop(s.mlx_ptr);
}
