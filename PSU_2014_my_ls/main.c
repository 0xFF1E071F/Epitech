/*
** main.c for my_ls in /home/dupard_e/rendus/PSU_2014_my_ls
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Nov 17 15:05:57 2014 Erwan Dupard
** Last update Fri Nov 28 12:24:29 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "./include/my.h"
#include "./getopt.h"
#include "./my_ls.h"
#include "./recursive.h"
#include "./misc.h"

char		*get_string(char *s)
{
  char		*ret;
  int		i;

  i = 0;
  if ((ret = malloc(my_strlen(s) * sizeof(*ret) + 1)) == NULL)
    return (NULL);
  while (s[i])
    {
      ret[i] = s[i];
      i++;
    }
  ret[i] = 0;
  return (ret);
}

int		count_args_dirs(int argc, char **argv)
{
  int		i;
  int		len;

  len = 0;
  i = 1;
  while (i <= argc - 1)
    {
      if (argv[i][0] != '-')
	len++;
      i++;
    }
  return (len);
}

char		**getdir(int argc, char **argv)
{
  int		i;
  char		**dir;
  int		j;

  j = 0;
  i = 1;
  if ((dir = malloc(sizeof(*dir) * count_args_dirs(argc, argv) + 1)) == NULL)
    return (NULL);
  (count_args_dirs(argc, argv) == 0) ? dir[0] = my_strdup(".") : 0;
  (count_args_dirs(argc, argv) == 0) ? dir[1] = NULL : 0;
  if (count_args_dirs(argc, argv) == 0)
    return (dir);
  while (i <= (argc -1))
    {
      if (argv[i][0] != '-')
	{
	  if ((dir[j] = get_string(argv[i])) == NULL)
	    return (NULL);
	  j++;
	}
      i++;
    }
  dir[j] = NULL;
  return (dir);
}

int		main(int argc, char **argv)
{
  t_opt		*t;
  char		**dir;
  int		i;

  if (argc == 1)
    {
      list_simple_dir("./");
      return (0);
    }
  dir = getdir(argc, argv);
  t = my_getopt(argc, argv);
  i = 0;
  while (dir[i] != NULL)
    {
      (IS_MANY_DIR) ? (my_printf("\033[32m%s:\033[0m\n", dir[i])) : (0);
      (IS_SLASH) ? dir[i] = my_strcat(dir[i], "/") : 0;
      (t->R) ? my_recursive(*t, dir[i]) : 0;
      if (!t->R)
	(t->l || t->g) ? list_column_dir(dir[i], t) : 0;
      (!t->l && !t->g) ? list_simple_dir(dir[i]) : 0;
      free(dir[i]);
      i++;
    }
  free(dir);
  return (0);
}
