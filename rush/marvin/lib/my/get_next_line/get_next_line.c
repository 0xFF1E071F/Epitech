/*
** get_next_line.c for get_next_line in /home/dupard_e/rendus/GetNexLine
**
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Nov 19 15:21:32 2014 Erwan Dupard
** Last update Wed Dec 31 12:34:14 2014 Erwan Dupard
*/

#include <stdlib.h>
#include <unistd.h>
#include "./get_next_line.h"

static char	gl_save[BUFF_SIZE];
static int	gl_offset = 0;
static int	gl_n = 0;

char		*get_next_line(const int fd)
{
  char		buffer[BUFF_SIZE];
  char		*tmp;
  int		i;

  if (init_gnl(&i, &tmp, gl_save) == -1)
    return (NULL);
  tmp[0] = 0;
  while ((gl_n = read(fd, buffer, BUFF_SIZE)) > 0)
    {
      buffer[gl_n] = 0;
      if ((gl_offset = isbackn(buffer)) < 0)
	my_is_not_backn(gl_save, &tmp, buffer);
      else
	{
	  tmp = my_strncat(tmp, buffer, gl_offset);
	  if (buffer[gl_offset + 1])
	    while ((gl_save[++i] = buffer[gl_offset++]));
	  return (tmp);
	}
    }
  if (tmp[0])
    return (tmp);
  return (NULL);
}

void		my_is_not_backn(char save[], char **tmp, char buffer[])
{
  (save[0]) ? *tmp = my_strncat(*tmp, save, BUFF_SIZE) : 0;
  save[0] = 0;
  *tmp = my_strncat(*tmp, buffer, BUFF_SIZE);
  *tmp = my_realloc(*tmp, BUFF_SIZE);
}

int		isbackn(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (str[i] == '\n')
	return (i);
      i++;
    }
  return (-1);
}

char		*my_strncat(char *dest, char *src, int n)
{
  int		i;
  char		*save;

  save = dest;
  i = 0;
  while (*dest)
    dest++;
  while (src[i] && i != n)
    {
      *dest = src[i];
      i++;
      dest++;
    }
  *dest = 0;
  return (save);
}
