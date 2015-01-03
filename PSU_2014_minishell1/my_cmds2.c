/*
** my_cmds2.c for minishell1 in /home/dupard_e/rendus/PSU_2014_minishell1
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Jan  1 12:32:51 2015 Erwan Dupard
** Last update Thu Jan  1 13:15:04 2015 Erwan Dupard
*/

#include <unistd.h>
#include <stdlib.h>
#include "./ressources.h"

void		my_cd(char **cmd, int *ok)
{
  if (cmd[1])
    if (chdir(cmd[1]) == -1)
      my_printf("[-] %s : No Such Directory\n", cmd[1]);
  cmd = cmd;
  ok = ok;
}
