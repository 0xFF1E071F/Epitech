/*
** my_snake.c for my_snake in /home/dupard_e/rendus/Piscine_C_minilibx/test3
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Oct 24 08:48:23 2014 Erwan Dupard
** Last update Fri Oct 24 11:27:21 2014 Erwan Dupard
*/

#include "my_snake.h"

int		my_draw_snake(t_infos infos, t_snake *handle, int color)
{
  while (handle->next != NULL)
    {
      mlx_pixel_put(infos.mlx_ptr, infos.win_ptr, handle->pos.x, handle->pos.y, color);
      handle = handle->next;
    }
  return (0);
}

t_infos		my_init_mlx(t_vect pos, char *title)
{
  void		*mlx_ptr;
  void		*win_ptr;
  t_infos	handle;

  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, pos.x, pox.y, title);
  handle = malloc(sizeof(t_infos));
  if (handle == NULL)
    return (0);
  t_infos.win_ptr = win_ptr;
  t_infos.mlx_ptr = mlx_ptr;
  return (t_infos);
}

t_snake		*my_add_segment(t_snake *handle)
{
  t_snake		*new;

  new = malloc(sizeof(*new))
    if (new == NULL)
      return (0);
  new->next = handle;
  new->pos.x = handle->pos.x + 1; // à Changer ..... 
  new->pos.y = handle->pos.y + 1; //
  
  handle = new;
  return (handle);
}
