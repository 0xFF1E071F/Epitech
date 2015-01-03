/*
** check.c for minishell1 in /home/dupard_e/rendus/PSU_2014_minishell1
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec 29 11:54:44 2014 Erwan Dupard
** Last update Wed Dec 31 15:33:17 2014 Erwan Dupard
*/

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include "./ressources.h"

t_funcs g_funcs[] = {
  {"exit", &my_exit},
  {"pwd", &my_pwd},
  {"env", &my_env},
  {"unsetenv", &my_unsetenv},
  {"setenv", &my_setenv},
  {"cd", &my_cd},
  {NULL, NULL}
};

void		my_execute(char *filename, char **args)
{
  extern char	**environ;
  int		pid;

  if ((pid = fork()) == 0)
    execve(filename, args, environ);
  else if (pid > 0)
    wait(NULL);
  else if (pid == -1)
    {
      my_printf("[-] Fork Failed..\n");
      exit(1);
    }
}

void		check_cmd_my(int *ok, char **cmd, int *found)
{
  int		i;

  i = -1;
  while (g_funcs[++i].cmd)
    {
      if (my_strcmp(g_funcs[i].cmd, cmd[0]) == 0)
	{
	  *found = 1;
	  g_funcs[i].ptr(cmd, ok);
	}
    }
}

void		check_cmd(int *ok, char **cmd)
{
  char		*path;
  char		**paths;
  int		i;
  int		found;

  if ((path = my_getenv("PATH")) == NULL)
    path = my_strdup("");
  paths = get_paths(path);
  i = 0;
  found = 0;
  check_cmd_my(ok, cmd, &found);
  if (!found)
    while (paths[++i])
      {
	if (paths[i] != NULL && paths[i][my_strlen(paths[i]) - 1] != '/')
	  paths[i] = my_strcat(paths[i], "/");
	if ((check_dir(paths[i], cmd[0])) == 1)
	  {
	    my_execute(my_strcat(paths[i], cmd[0]), cmd);
	    found = 1;
	  }
      }
  if (!found)
    my_printf("[*] '%s' command not found\n", cmd[0]);
}

char		*get_str(char *str)
{
  int		i;
  char		*ret;

  i = 0;
  while (str[i] != ':' && str[i] != '\0')
    i++;
  if ((ret = malloc(i + 1)) == NULL)
    return (NULL);
  i = 0;
  while (str[i] != ':' && str[i] != '\0')
    {
      ret[i] = str[i];
      i++;
    }
  ret[i] = 0;
  return (ret);
}

char		**get_paths(char *path)
{
  int		i;
  char		**paths;

  i = 0;
  while (path[i++]);
  if ((paths = malloc(i + 1)) == NULL)
    return (NULL);
  i = 0;
  if ((paths[i] = get_str(path)) == NULL)
    return (NULL);
  i++;
  while (*path)
    {
      if (*path == ':')
	{
	  if ((paths[i] = get_str(path + 1)) == NULL)
	    return (NULL);
	  i++;
	}
      path++;
    }
  paths[i] = NULL;
  return (paths);
}
