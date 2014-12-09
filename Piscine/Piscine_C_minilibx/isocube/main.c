/*
** main.c for isocube in /home/dupard_e/rendus/Piscine_C_minilibx/isocube
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov 11 15:11:49 2014 Erwan Dupard
** Last update Tue Nov 11 16:48:59 2014 Erwan Dupard
*/

#include <mlx.h>
#include "./my_vectors.h"
#include "include/my.h"
#include "isocube.h"

int		main()
{
  t_infos	s;
  t_cube	c;
  t_vect	pos;
  
  s.mlx_ptr = mlx_init();
  s.win_ptr = mlx_new_window(s.mlx_ptr, 500, 500 , "isocube");
  c.l = 50;
  c.L = 50;
  c.z = 50;
  pos.x = 189;
  pos.y = 211;
  isocube(pos, c, s);
  mlx_loop(s.mlx_ptr);
  return (0);
}
