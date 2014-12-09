/*
** formats.c for my_ls in /home/dupard_e/rendus/PSU_2014_my_ls
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov 18 17:28:01 2014 Erwan Dupard
** Last update Fri Nov 28 12:29:36 2014 Erwan Dupard
*/

#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <errno.h>
#include "./include/my.h"
#include "./misc.h"

int		get_total_blocks(char *path)
{
  struct dirent	*e;
  DIR		*d;
  int		len;

  len = 0;
  if ((d = opendir(path)) == NULL)
    return (0);
  while ((e = readdir(d)))
    len += e->d_type;
  if ((closedir(d)) == -1)
    return (0);
  return (len);
}

int		display_spaces(int n)
{
  int		i;

  if (n < 0)
    return (1);
  i = 0;
  while (i != n)
    {
      my_putchar(' ');
      i++;
    }
  return (0);
}

DIR		*get_dir_ptr(char *path)
{
  DIR		*d;

  if (!(d = opendir(path)))
    {
      if (errno == ENOTDIR)
	{
	  my_printf("%s\n", path);
	  return (NULL);
	}
      else
	{
	  my_fprintf(2, "Can't Open Directory '%s'\n", path);
	  perror("opendir");
	  return (NULL);
	}
    }
  return (d);
}

char		*format_dir(char *root, char *file)
{
  char		*ret;
  int		len;

  len = (my_strlen(root) + my_strlen(file));
  if ((ret = malloc(len + 2)) == NULL)
    return (NULL);
  while (*root)
    {
      *ret = *root;
      ret++;
      root++;
    }
  while (*file)
    {
      *ret = *file;
      ret++;
      file++;
    }
  *ret = 0;
  return (ret - len);
}

void		free_double_tab(char ***a)
{
  int		i;

  i = 0;
  while (a[i] != NULL)
    {
      free(a[i]);
      i++;
    }
}
