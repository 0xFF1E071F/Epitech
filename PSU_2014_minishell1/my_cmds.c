/*
** my_cmds.c for minishell1 in /home/dupard_e/rendus/PSU_2014_minishell1
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Dec 31 14:16:32 2014 Erwan Dupard
** Last update Thu Jan  1 16:46:14 2015 Erwan Dupard
*/

#include <stdlib.h>
#include "./ressources.h"

void		my_exit(char **cmd, int *ok)
{
  exit(0);
  cmd = cmd;
  ok = ok;
}

void		my_pwd(char **cmd, int *ok)
{
  extern char	**environ;
  int		i;

  i = -1;
  while (environ[++i])
    {
      if (my_strncmp("PWD", environ[i], 3) == 0)
	my_printf("%s\n", environ[i] + 4);
    }
  cmd = cmd;
  ok = ok;
}

void		my_env(char **cmd, int *ok)
{
  extern char	**environ;
  int		i;

  i = -1;
  my_printf("\033[32m\033[1m[+] Getting env ..\n\033[0m");
  while (environ[++i])
    my_printf("%s\n", environ[i]);
  cmd = cmd;
  ok = ok;
}

void		my_setenv(char **cmd, int *ok)
{
  extern char	**environ;
  int		i;
  char		*env;

  i = -1;
  while (cmd[++i]);
  if (i != 3)
    my_printf("[*] Usage : %s <envname> <value>\n", cmd[0]);
  else
    {
      i = -1;
      while (environ[++i])
	{
	  if (my_strncmp(environ[i], cmd[1], my_strlen(cmd[1])) == 0)
	    {
	      env = environ[i];
	      while (*(env++) !=  '=');
	      env = my_strcpy(env, cmd[2]);
	    }
	}
    }
  ok = ok;
}

void		my_unsetenv(char **cmd, int *ok)
{
  extern char	**environ;
  int		i;
  char		*env;

  i = -1;
  while (cmd[++i]);
  if (i != 2)
    my_printf("[*] Usage : %s <envname>\n", cmd[0]);
  else
    {
      i = -1;
      while (environ[++i])
	{
	  if (my_strncmp(environ[i], cmd[1], my_strlen(cmd[1])) == 0)
	    {
	      env = environ[i];
	      while (*(env++) !=  '=');
	      *env = '\0';
	    }
	}
    }
  ok = ok;
}
