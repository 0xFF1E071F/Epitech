/*
** maze.c for wolf3d in /home/dupard_e/rendus/MUL_2014_wolf3d
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec  8 15:32:29 2014 Erwan Dupard
** Last update Wed Dec 17 01:47:16 2014 Erwan Dupard
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "./my_vectors.h"
#include "./maze.h"
#include "./include/my.h"

int		get_y(char *file, int *x)
{
  int		y;
  char		*s;
  int		fd;

  y = 0;
  if ((fd = open(file, O_RDONLY)) == -1)
    return (0);
  while ((s = get_next_line(fd)))
    {
      *x = my_strlen(s);
      free(s);
      ++y;
    }
  close(fd);
  return (y);
}

char		**get_maze_file(char *file, t_maze *maze)
{
  char		**map;
  int		y;
  int		i;

  i = 0;
  y = get_y(file, &maze->size.x);
  if ((map = malloc(sizeof(*map) * y + 1)) == NULL)
    return (NULL);
  while ((map[i] = get_next_line(maze->fd)))
    ++i;
  maze->size.y = i;
  map[i] = NULL;
  return (map);
}
