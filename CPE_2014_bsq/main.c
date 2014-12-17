/*
** main.c for bsq in /home/dupard_e/rendus/CPE_2014_bsq
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec 15 10:14:31 2014 Erwan Dupard
** Last update Wed Dec 17 01:31:25 2014 Erwan Dupard
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "./include/my.h"
#include "./ressources.h"

void		free_tab(char ***c)
{
  char		**map;
  int		i;

  i = 0;
  map = *c;
  while (map[i])
    {
      free(map[i]);
      i++;
    }
  free(map);
}

int		get_infos(int *fd, char *s)
{
  if ((*fd = open(s, O_RDONLY)) == -1)
    {
      my_fprintf(2, "[-] Failed to open file '%s'\n", s);
      return (1);
    }
  return (0);
}

int		main(int argc, char **argv)
{
  char		**map;
  int		fd;
  t_vect	*c;
  int		b;
  int		y;

  if (argc < 2)
    {
      my_printf("[*] OPT : %s <filename>\n", argv[0]);
      return (0);
    }
  if (get_infos(&fd, argv[1]) == 1)
    return (1);
  map = my_gettab(fd, &y);
  if (!(c = check_bsq(map, &b, y)))
    {
      my_fprintf(2, "Erreur : impossible de trouver un carré ..\n");
      return (1);
    }
  fill_carre(&map, *c, b, y);
  my_show_tab(map);
  free_tab(&map);
  return (0);
}
