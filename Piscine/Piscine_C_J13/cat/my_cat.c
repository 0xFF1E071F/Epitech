/*
** my_cat.c for my_cat in /home/dupard_e/rendus/Piscine_C_J13/cat
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Oct 22 09:42:53 2014 Erwan Dupard
** Last update Mon Dec  1 09:18:31 2014 Erwan Dupard
*/

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include "my_inc.h"

int		my_putstr_err(char *str)
{
  write(2, str, my_strlen(str));
  return (0);
}

void		get_errno(int n, char *s)
{
  if (n == EACCES)
    {
      my_putstr_err("cat: ");
      my_putstr_err(s);
      my_putstr_err(": Permission denied\n");
    }
  if (n == ENOENT)
    {
      my_putstr_err("cat: ");
      my_putstr_err(s);
      my_putstr_err(": No such file or directory\n");
    }
  if (n == ENAMETOOLONG)
    {
      my_putstr_err("cat: ");
      my_putstr_err(s);
      my_putstr_err(": File name too long\n");
    }
}

int		my_cat(int fd)
{
  char		buffer[BUFF_SIZE];
  int		n;

  while ((n = read(fd, buffer, BUFF_SIZE)) > 0)
    write(1, buffer, n);
  return (0);
}

void		read_stdin()
{
  char		buffer[BUFF_SIZE];
  int		n;

  while ((n = read(0, buffer, BUFF_SIZE)) > 0)
    write(1, buffer, n);
}

int		main(int ac, char **av)
{
  int		fd;
  int		i;

  if (ac < 2)
    {
      read_stdin();
      return (0);
    }
  i = 1;
  while (i != ac)
    {
      if ((fd = open(av[i], O_RDONLY)) == -1)
	get_errno((int)errno, av[i]);
      my_cat(fd);
      i++;
    }
  return (0);
}
