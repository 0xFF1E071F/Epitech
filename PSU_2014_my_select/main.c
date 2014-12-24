/*
** main.c for my_select in /home/dupard_e/rendus/PSU_2014_my_select
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Dec 15 10:12:10 2014 Erwan Dupard
** Last update Wed Dec 24 13:59:49 2014 Erwan Dupard
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <termios.h>
#include <curses.h>
#include <term.h>
#include <stdlib.h>
#include "./my_select.h"
#include "./term.h"
#include "./list.h"
#include "./include/my.h"

int		get_tty_fd()
{
  int		fd;

  if ((fd = open("/dev/tty", O_WRONLY)) == -1)
    {
      my_fprintf(2, "[-] Failed to Open /dev/tty ..\n");
      exit(1);
    }
  return (fd);
}

int		my_getattr(struct termios *t, struct termios *save)
{
  if (tcgetattr(0, t) == -1)
    return (1);
  if (tcgetattr(0, save) == -1)
    return (1);
  return (0);
}

int		catch_error(char **term, char *bp,
			    struct termios *t, struct termios *save)
{
  char		*tterm;

  tterm = *term;
  if ((tterm = my_getenv("TERM")) == NULL)
    {
      my_fprintf(2, "[-] Faild to get TERM env variable\n");
      return (1);
    }
  if ((tgetent(bp, tterm)) != 1)
    {
      my_fprintf(2, "[-] Failed to tgetent(%s)..\n", term);
      return (1);
    }
  if (my_getattr(t, save) == 1)
    {
      my_fprintf(2, "[-] Failed to getattr..\n");
      return (1);
    }
  return (0);
}

int			main(int argc, char **argv)
{
  t_list		*list;
  char			*term;
  char			*bp;
  int			tty;
  struct termios	t;
  struct termios	save;

  bp = NULL;
  list = NULL;
  tty = get_tty_fd();
  if (argc < 2)
    {
      my_printf("[*] Usage : %s [arg:]\n", argv[0]);
      return (0);
    }
  my_params_to_list(&list, argc, argv);
  if (catch_error(&term, bp, &t, &save))
    return (1);
  raw_mode(&t);
  clean_screen(tty);
  my_select(&list, tty);
  default_mode(&save);
  return (0);
}
