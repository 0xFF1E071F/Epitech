/*
** get_next_line.c for get_next_line in /home/dupard_e/rendus/GetNexLine
**
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Nov 19 15:21:32 2014 Erwan Dupard
** Last update Mon Nov 24 14:31:17 2014 Erwan Dupard
*/

#include <stdlib.h>
#include <unistd.h>
#include "./get_next_line.h"
#include "../my.h"

static char	g_save[BUFF_SIZE];
static int	g_offset = 0;
static int	g_n = 0;

char		*get_next_line(const int fd)
{
  char		buffer[BUFF_SIZE];
  char		*tmp;
  int		i;

  if (init_gnl(&i, &tmp, g_save) == -1)
    return (NULL);
  while ((g_n = read(fd, buffer, BUFF_SIZE)) > 0)
    {
      buffer[g_n] = 0;
      if ((g_offset = isbackn(buffer)) < 0)
	tmp = my_notbackn(tmp, buffer);
      else
	{
	  tmp = my_strncat(tmp, buffer, g_offset);
	  if (buffer[g_offset + 1])
	    while ((g_save[++i] = buffer[g_offset++]));
	  return (tmp);
	}
    }
  if (tmp[0])
    return (tmp);
  return (NULL);
}

char		*my_notbackn(char *tmp, char buffer[])
{
  (g_save[0]) ? tmp = my_strncat(tmp, g_save, BUFF_SIZE) : 0;
  g_save[0] = 0;
  tmp = my_strncat(tmp, buffer, BUFF_SIZE);
  tmp = my_realloc(tmp, BUFF_SIZE);
  return (tmp);
}

int		init_gnl(int *i, char **tmp, char save[])
{
  *i = -1;
  if ((*tmp = malloc(sizeof(**tmp) * BUFF_SIZE + 1)) == NULL)
    return (-1);
  save[0] = 0;
  return (0);
}
