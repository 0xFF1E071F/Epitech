/*
** main.c for minishell1 in /home/dupard_e/rendus/PSU_2014_minishell1
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec 29 10:53:11 2014 Erwan Dupard
** Last update Wed Dec 31 14:38:14 2014 Erwan Dupard
*/

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include "./include/my.h"
#include "./ressources.h"

void sig_handler(int signo)
{
  signo = signo;
}

int		main()
{
  char		*line;
  int		ok;
  char		**cmd;

  ok = 0;

  while (ok != 1)
    {
      if (signal(SIGINT, sig_handler) == SIG_ERR)
	my_fprintf(2, "Can't catch signal\n");
      my_printf(PS1);
      line = get_next_line(0);
      if (line != NULL)
	{
	  if ((cmd = my_str_to_word_tab(line)) == NULL)
	    return (1);
	  free(line);
	  if (cmd[0] != NULL)
	    check_cmd(&ok, cmd);
	  my_free_word_tab(&cmd);
	}
      else
	my_printf("\n");
    }
  return (0);
}
