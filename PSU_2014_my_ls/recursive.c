/*
** recursive.c for RECURSIVE_H_ in /home/dupard_e/rendus/PSU_2014_my_ls
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Nov 19 18:23:06 2014 Erwan Dupard
** Last update Wed Nov 26 12:29:31 2014 Erwan Dupard
*/

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include "./include/my.h"
#include "./my_ls.h"
#include "./recursive.h"
#include "./getopt.h"
#include "./misc.h"

DIR		*catch_error(char *root)
{
  DIR		*d;

  if (!(d = opendir(root)))
    {
      perror("opendir");
      return (NULL);
    }
  return (d);
}

int		my_recursive(t_opt t, char *root)
{
  DIR		*d;
  struct dirent	*e;
  struct stat	s;
  char		*file;

  if ((d = catch_error(root)) == NULL)
    return (1);
  my_printf("\033[32m%s:\033[0m\n", root);
  (t.l || t.g) ? list_column_dir(root, &t) : list_simple_dir(root);
  while ((e = readdir(d)))
    {
      file = format_dir(root, e->d_name);
      if ((stat(file, &s)) == -1)
	{
	  closedir(d);
	  perror("stat");
	  return (1);
	}
      (IS_DIR_OK) ? file = my_strcat(file, "/") : 0;
      (IS_DIR_OK) ? my_recursive(t, file) : 0;
      free(file);
    }
  closedir(d);
  return (0);
}
