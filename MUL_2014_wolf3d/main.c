/*
** main.c for wolf3d in /home/dupard_e/rendus/MUL_2014_wolf3d
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec  8 13:34:15 2014 Erwan Dupard
** Last update Wed Dec 24 12:44:02 2014 Erwan Dupard
*/

#include <mlx.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "./include/my.h"
#include "./ressources.h"

void		opt(char *avo)
{
  my_fprintf(2, "\nI Need A Map Please ... \n");
  my_fprintf(2, "Usage : %s <map_path>\nErwan Dupard #Epitech\n\n", avo);
  exit(0);
}

void		get_mlx_info(t_infos *s)
{
  s->win_x = WIDTH;
  s->win_y = HEIGHT;
  s->title = my_strdup("WolfMe");
  my_printf("[*] Getting MLX ptr..\n");
  if ((s->mlx_ptr = mlx_init()) == NULL)
    {
      my_fprintf(2, "Failed to load library mlx.\n");
      exit(1);
    }
  my_printf("[*] Getting MLX Window ptr (%d, %d) with title '%s'..\n",
	    s->win_x,
	    s->win_y,
	    s->title);
  if ((s->win_ptr = mlx_new_window(s->mlx_ptr, s->win_x,
				   s->win_y, s->title)) == NULL)
    {
      my_fprintf(2, "Failed to create window.\n");
      exit(1);
    }
  my_printf("[*] Creating Image..\n");
  s->img.img_p = mlx_new_image(s->mlx_ptr, s->win_x, s->win_y);
  s->img.img_n = mlx_get_data_addr(s->img.img_p, &s->img.bpp,
				   &s->img.size_line, &s->img.endian);
  my_printf("[+] MLX infos obtained successfully..\n");
}

int		main(int ac, char **av)
{
  t_maze	*maze;
  t_infos	s;
  t_player	*cPlayer;

  if ((maze = malloc(sizeof(*maze))) == NULL)
    return (1);
  if (ac < 2)
    opt(av[0]);
  if ((catch_error(&maze, av[1], &cPlayer)) == 1)
    return (1);
  get_mlx_info(&s);
  get_sky_and_floor(&s);
  get_wallx(&s, cPlayer, maze);
  my_show_image(&s);
  s.p = *cPlayer;
  s.m = *maze;
  mlx_key_hook(s.win_ptr, key_pressed, &s);
  mlx_loop(s.mlx_ptr);
  return (0);
}
