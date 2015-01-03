/*
** dir.c for minishell1 in /home/dupard_e/rendus/PSU_2014_minishell1
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec 29 12:23:37 2014 Erwan Dupard
** Last update Wed Dec 31 14:32:04 2014 Erwan Dupard
*/

#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include "./ressources.h"

int		check_dir(char *path, char *file)
{
  DIR		*d;
  struct dirent	*e;

  if ((d = opendir(path)) == NULL)
    {
      my_fprintf(2, "[-] Can't Open Dir : '%s'\n", path);
      return (0);
    }
  while ((e = readdir(d)))
    {
      if (my_strcmp(file, e->d_name) == 0)
	return (1);
    }
  return (0);
}
