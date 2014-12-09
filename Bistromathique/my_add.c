/*
** my_ops.c for bistro in /home/dupard_e/rendus/Bistromathique
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Oct 27 16:30:58 2014 Erwan Dupard
** Last update Mon Nov  3 16:36:43 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "../include/my.h"

int		get_maxstringlen(char *a, char *b);
char            *calc_add(char *ret, char *a, char *b, char *base);
char            *my_add(char *a, char *b, char *base);
char            *rest(int r, char *ret, char *base);

int		get_maxstringlen(char *a, char *b)
{
  if (my_strlen(a) >= my_strlen(b))
    return (my_strlen(a));
  else
    return (my_strlen(b));
}

int		get_baseindex(char c, char *base)
{
  int		i;

  i = 0;
  while (base[i])
    {
      if (c == base[i])
	return (i);
      i++;
    }
  return (-1);
}

char		*my_add(char *a, char *b, char *base)
{
  int		a_len;
  int		b_len;
  int		n;
  char		*ret;
  int		r;
  char		*save;

  r = 0;
  a = my_revstr(a);
  b = my_revstr(b);
  if ((ret = save = malloc(get_maxstringlen(a, b))) == NULL)
    return (0);
  ret = calc_add(ret, a, b, base);
  return (my_revstr(ret));
}

char		*calc_add(char *ret, char *a, char *b, char *base)
{
  int		r;
  int		n;
  int		i;
  int		base_n;

  base_n = my_strlen(base);
  i = 0;
  r = 0;
  while (*a != 0 || *b != 0)
    {
      n = get_baseindex(*a, base) + get_baseindex(*b, base) + r;
      (*a == 0) ? n = *a + get_baseindex(*b, base) + r : 0;
      (*b == 0) ? n = *b + get_baseindex(*a, base) + r : 0;
      r = n / base_n;
      *ret = base[n % base_n];
      (*a != 0) ? a++ : 0;
      (*b != 0) ? b++ : 0;
      ret++;
      i++;
    }
  ret = rest(r, ret, base);
  return (ret - i);
}

char		*rest(int r, char *ret, char *base)
{
  if (r > 0)
    {
      *ret = base[r];
      ret++;
      *ret = 0;
    }
  *ret = 0;
  return (ret);
}
