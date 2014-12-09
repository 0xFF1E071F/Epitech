/*
** my_minus.c for my_minus in /home/delzen_j/Bistromathique
** 
** Made by jean-claude delzenne
** Login   <delzen_j@epitech.net>
** 
** Started on  Tue Oct 28 14:05:19 2014 jean-claude delzenne
** Last update Wed Oct 29 19:13:02 2014 jean-claude delzenne
*/

#include <stdlib.h>
#include "include/my.h"

char		*strdup(char *str);
int		calc_sub(char *ret, char *a, char *b, int r);
int             str_clean(char *a, char *b);
int		get_maxstringlen(char *a, char *b);
int             rest(char *ret, int i, int r);

int		get_maxstringlen(char *a, char *b)
{
  if (my_strlen(a) >= my_strlen(b))
    return (my_strlen(a));
  else
    return (my_strlen(b));
}

int	my_str_lcmp(char *a, char *b)
{
  int		sizea;
  int		sizeb;

  sizea = my_strlen(a);
  sizeb = my_strlen(b);
  if (sizea > sizeb)
    return (1);
  if (sizea == sizeb)
    return (0);
  if (sizea < sizeb)
    return (-1);
}

char		*my_sub(char *a, char *b)
{
  char		*ret;
  int		len;
  int		type;
  int		r;

  r = 0;
  type = my_str_lcmp(a, b);
  (type == 0) ? (type = my_strcmp(a, b)) : 0;
  len = get_maxstringlen(a, b);
  a = my_revstr(a);
  b = my_revstr(b);
  if((ret = malloc(len + 1)) == NULL)
      return (NULL);
  if (type >= 0)
    calc_sub(ret, a, b, r);
  else
    {
      my_putchar('-');
      calc_sub(ret, b, a, r);
    }
  ret = my_revstr(ret);
  return (ret);
}

int		calc_sub(char *ret, char *a, char *b, int r)
{
  int		i;
  int		n;
  int		save;

  i = 0;
  while ((*a != 0) || (*b != 0))
    {
      save = 0;
      ((*a < *b) || ((*a == '0') && (r == 1))) ? save = 1 : 0;
      (save == 1) ? (*a += 10) : 0;
      n = (*a - '0') - (*b - '0' + r);
      (*a == 0) ? n = (*a - (*b - '0') + r) : 0;
      (*b == 0) ? n = ((*a - '0') - r) : 0;
      r = save;
      *ret = n + '0';
      (*a != 0) ? a++ : 0;
      (*b != 0) ? b++ : 0;
      ret++;
      i++;
    }
  rest(ret, i, r);
  *ret = 0;
  ret -= i;
  return (0);
}

int		rest(char *ret, int i, int r)
{
  if (r > 0)
    {
      *ret = r + '0';
      ret++;
      i++;
    }
  return (0);
}

int	main(int argc, char **argv)
{
  my_putstr(my_sub(strdup(argv[1]), strdup(argv[2])));
}
