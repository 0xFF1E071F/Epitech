/*
** event.c for wolf3d in /home/dupard_e/rendus/MUL_2014_wolf3d
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Sun Dec 14 21:29:00 2014 Erwan Dupard
** Last update Wed Dec 24 13:13:24 2014 Erwan Dupard
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <math.h>
#include "./ressources.h"
#include "./include/my.h"

int		catch_error(t_maze **maze, char *av1, t_player **player)
{
  t_maze	*m;

  m = *maze;
  my_printf("[*] Checking Errors .. \n");
  if ((m->fd = open(av1, O_RDONLY)) == -1)
    {
      my_fprintf(2, "\t[-] Failed to open file '%s'..\n", av1);
      return (1);
    }
  if ((m->map = get_maze_file(av1, m)) == NULL)
    {
      my_fprintf(2, "\t[-] Failed to get Maze ... \n");
      return (1);
    }
  if ((*player = get_player_infos(m)) == NULL)
    {
      my_fprintf(2, "\t[-] Player Not Found ..\n");
      return (1);
    }
  return (0);
}

int		key_pressed(int keycode, void *param)
{
  t_infos	*s;

  s = (t_infos *)param;
  clean_image(s);
  get_sky_and_floor(s);
  if (keycode == 0xff1b)
    exit(1);
  if (keycode == 0x7a)
    {
      s->p.x = s->p.x + (0.1 * cos((s->p.angle / 180) * 20));
      s->p.y = s->p.y + (0.1 * sin((s->p.angle / 180) * 20));
    }
  if (keycode == 0x73)
    {
      s->p.x = s->p.x - (0.1 * cos((s->p.angle / 180) * 20));
      s->p.y = s->p.y - (0.1 * sin((s->p.angle / 180) * 20));
    }
  if (keycode == 0x64)
    s->p.angle += 5;
  if (keycode == 0x71)
    s->p.angle -= 5;
  if (s->p.angle <= 0)
    s->p.angle += 180;
  if (s->p.angle >= 360)
    s->p.angle = ((int)s->p.angle % 360);
  printf("angle : %f\n", s->p.angle);
  get_wallx(s, &s->p, &s->m);
  my_show_image(s);
  return (1);
}
