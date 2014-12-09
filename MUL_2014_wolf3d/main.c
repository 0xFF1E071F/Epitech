/*
** main.c for wolf3d in /home/dupard_e/rendus/MUL_2014_wolf3d
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec  8 13:34:15 2014 Erwan Dupard
** Last update Tue Dec  9 14:40:40 2014 Erwan Dupard
*/

#include <mlx.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "./maze.h"
#include "./my_vectors.h"
#include "./include/my.h"

void		opt(char *avo)
{
  my_fprintf(2, "\nI Need A Map Please ... \n");
  my_fprintf(2, "Usage : %s <map_path>\nErwan Dupard #Epitech\n\n", avo);
  exit(0);
}

void		get_mlx_info(t_infos *s)
{
  s->win_x = 1000;
  s->win_y = 1000;
  s->title = my_strdup("WolfMe");
  if ((s->mlx_ptr = mlx_init()) == NULL)
    {
      my_fprintf(2, "Failed to load library mlx.\n");
      exit(1);
    }
  if ((s->win_ptr = mlx_new_window(s->mlx_ptr, s->win_x, s->win_y, s->title)) == NULL)
    {
      my_fprintf(2, "Failed to create window.\n");
      exit(1);
    }
  s->img.img_p = mlx_new_image(s->mlx_ptr, s->win_x, s->win_y);
  s->img.img_n = mlx_get_data_addr(s->img.img_p, &s->img.bpp,
				   &s->img.size_line, &s->img.endian);
}

int		main(int ac, char **av)
{
  t_maze	*maze;
  int		fd;
  t_infos	s;

  maze = NULL;
  if (ac < 2)
    opt(av[0]);
  if ((fd = open(av[1], O_RDONLY)) == -1)
    {
      my_fprintf(2, "[-] Failed to open file '%s'..\n", av[1]);
      return (1);
    }  
  maze = get_maze_file(fd);
  maze = maze;
  get_mlx_info(&s);
  /* to be continues */
  mlx_loop(s.mlx_ptr);
  return (0);
}
