/*
** main.c for colle3 in /home/dupard_e/rendus/Piscine_C_colles-Semaine_03
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Sat Oct 25 14:07:34 2014 Erwan Dupard
** Last update Sun Oct 26 13:35:39 2014 Erwan Dupard
*/

#include "my_struct.h"

int		main(int argc, char **argv)
{
  char		buff[BUFF_SIZE + 1];
  int		len;

  while ((len = read(0, buff, BUFF_SIZE)) > 0)
    {
      buff[len] = 0;
      detect(buff);
    }
  return (0);
}

int		get_x(char *str)
{
  int		x;

  x = 0;
  while (*str != '\n')
    {
      x++;
      str++;
    }
  return (x);
}

int		get_y(char *str)
{
  int		y;

  y = 0;
  while (*str != 0)
    {
      if (*str == '\n')
	y++;
      str++;
    }
  return (y);
}

void			detect(char *str)
{
  int		x;
  int		y;

  x = get_x(str);
  y = get_y(str);
  if (*str == 'o')
    aff_colle("[colle1-1]", x, y);
  else if (*str == '/')
    aff_colle("[colle1-2]", x, y);
  else if (*str == 'B')
    {
      if (x > 1 && y > 1)
	my_putstr("[Aucune]");
      if (x == 1 || y == 1)
	aff_all_colle(x, y);
    }
  else if (*str == 'A' && *(str + (x - 1)) == 'A')
    aff_colle("[colle1-3]", x, y);
  else if (*str == 'A' && *(str + (y * (x + 1)) - (x + 1)) == 'A')
    aff_colle("[colle1-4]", x, y);
  else if (*str == 'A' && *(str + (y * (x + 1)) - (x + 1)) == 'C')
    aff_colle("[colle1-5]", x, y);
  else
    my_putstr("Aucune\n");
}
