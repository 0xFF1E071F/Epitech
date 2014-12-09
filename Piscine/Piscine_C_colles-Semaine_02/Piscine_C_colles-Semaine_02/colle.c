/*
** colle.c for Piscine_C_colles-Semaine_02 in /home/dupard_e/rendus/Piscine_C_colles-Semaine_02
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Sat Oct 11 13:13:06 2014 Erwan Dupard
** Last update Sat Oct 11 20:29:12 2014 Erwan Dupard
*/

#include <stdlib.h>
#include <unistd.h>

char		*filling_spaces(char *str, int len)
{
  int		i;

  i = 0;
  while (i != len)
    {
      str[i] = ' ';
      i++;
    }
  str[i] = 0;
  return (str);
}

int		is_spaced(char *str)
{
  while (*str)
    {
      if (*str == ' ')
	return (1);
      str++;
    }
  return (0);
}

int		colle(char *str, unsigned int micro_sec)
{
  isimp(str, micro_sec);
}

int		isimp(char *str, unsigned int micro_sec)
{
  int		len;
  int		pos;
  char		*s2;
  char		c;
  
  c = 32;
  len = my_strlen(str);
  s2 = malloc(len);
  s2 = filling_spaces(s2, len);
  pos = len / 2;
  while (c != str[pos] + 1)
    {
      s2[pos] = c;
      my_putstr(s2);
      usleep(micro_sec);
      clear();
      c++;
    }
  is_imp2(str, s2, micro_sec);
}

int		is_imp2(char *str, char *s2, int micro_sec)
{
  int		len;
  int		pos1;
  int		pos2;
  char		c1;
  char		c2;
  
  len = my_strlen(str);
  pos1 = (len / 2) - 1;
  pos2 = (len / 2) + 1;
  c1 = 32;
  c2 = 32;
  while (is_spaced(s2))
    {
      while (c1 != str[pos1] || c2 != str[pos2]) 
	{
	  s2[pos1] = c1;
	  s2[pos2] = c2 + 1;
	  my_putstr(s2);
	  usleep(micro_sec);
	  if (c1 != str[pos1])
	    c1++;
	  if (c2 != str[pos2])
	    c2++;
	  clear();
	}
      c1 = 32;
      c2 = 32;
      pos1--;
      pos2++;
    }
}
