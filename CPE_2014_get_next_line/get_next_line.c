/*
** get_next_line.c for get_next_line in /home/dupard_e/rendus/GetNexLine
**
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Nov 19 15:21:32 2014 Erwan Dupard
** Last update Thu Dec  4 13:24:54 2014 Erwan Dupard
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
  char		*ret;

  if (init_gnl(&i, &tmp, gl_save) == -1)
    return (NULL);
  tmp[0] = 0;
  while ((gl_n = read(fd, buffer, BUFF_SIZE)) > 0)
    {
      buffer[gl_n] = 0;
      if ((gl_offset = isbackn(buffer)) < 0)
	{
	  (gl_save[0]) ? tmp = my_strncat(tmp, gl_save, BUFF_SIZE) : 0;
	  gl_save[0] = 0;
	  tmp = my_strncat(tmp, buffer, BUFF_SIZE);
	  tmp = my_realloc(tmp, BUFF_SIZE);
	}
      else
	{
	  tmp = my_strncat(tmp, buffer, gl_offset);
	  if (buffer[gl_offset + 1])
	    while (gl_save[++i] = buffer[gl_offset++]);
	  return (tmp);
	}
    }
  if (tmp[0])
    return (tmp);
  return (NULL);
}

int		init_gnl(int *i, char **tmp, char save[])
{
  **tmp = 0;
  *i = -1;
  if ((*tmp = malloc(sizeof(**tmp) * BUFF_SIZE + 1)) == NULL)
    return (-1);
  save[0] = 0;
  return (0);
}

char            *my_realloc(char *buf, int size)
{
  char		*ret;
  int		 i;
  int		len;

  len = -1;
  i = 0;
  while (buf[++len]);
  if ((ret = malloc(len * sizeof(*buf) + size + 1)) == NULL)
    return (NULL);
  while (buf[i])
    {
      ret[i] = buf[i];
      i++;
    }
  ret[i] = 0;
  return (ret);
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
