/*
** main.c for fdf in /home/dupard_e/rendus/MUL_2014_fdf
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Fri Nov  7 15:26:35 2014 Erwan Dupard
** Last update Sat Dec  6 02:10:49 2014 Erwan Dupard
*/

#include <mlx.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "./my_gettab.h"
#include "./include/my.h"
#include "./draw_fdf.h"
#include "./images.h"

int		catch_errors(int argc, char **argv, t_expose *exp)
{
  if (argc != 2)
    {
      my_fprintf(2, "Usage : %s <test.fdf>\n", argv[0]);
      return (1);
    }
  if ((exp->fd = open(argv[1], O_RDONLY)) == -1)
    {
      my_fprintf(2, "Failed to open file '%s'\n", argv[1]);
      return (1);
    }
  return (0);
}

int		get_mlx_info(t_infos *s, t_image *img)
{
  s->mlx_ptr = mlx_init();
  if (s->mlx_ptr == NULL)
    {
      my_fprintf(2, "I don't have any env .. Can't load library\n");
      return (1);
    }
  s->win_ptr = mlx_new_window(s->mlx_ptr, 1000, 1000, "FDF Erwan Dupard");
  if (s->win_ptr == NULL)
    {
      my_fprintf(2, "I don't have any env .. Can't load library\n");
      return (1);
    }
  img->img_p = mlx_new_image(s->mlx_ptr, 1000, 1000);
  img->img_n = mlx_get_data_addr(img->img_p, &img->bpp,
				 &img->size_line, &img->endian);
  return (0);
}

int		my_keypressed(int keycode, void *param)
{
  t_expose	*t;

  t = (t_expose *)(param);
  if (keycode == 0x76)
    mlx_clear_window(t->s->mlx_ptr, t->s->win_ptr);
  if (keycode == 0x63)
    my_show_image(t->img, t->s);
  if (keycode == 0xff1b)
    exit(1);
  return (0);
}

int		main(int argc, char **argv)
{
  t_list	list;
  t_infos	s;
  t_vect	c;
  t_expose	exp;
  t_image	img;

  exp.s = &s;
  exp.img = &img;
  img.s = &s;
  if (catch_errors(argc, argv, &exp))
    return (1);
  if ((get_mlx_info(&s, &img)) == 1)
    return (1);

  list = read_tab(exp.fd, list, &c);
  draw_fdf(&list, c, &img);
  my_show_image(&img, &s);
  mlx_key_hook(s.win_ptr, my_keypressed, &exp);
  mlx_loop(s.mlx_ptr);
  return (0);
}
