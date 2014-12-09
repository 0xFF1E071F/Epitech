/*
** my_mul.c for bistro in /home/dupard_e/rendus/Bistromathique
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Oct 28 12:16:30 2014 Erwan Dupard
** Last update Mon Nov  3 16:08:46 2014 Erwan Dupard
*/

int		my_strlen(char *str);

char		my_mul(char *a, char *b)
{
  int		r;
  int		n;
  int		la;
  int		lb;
  char		*ret;

  if ((ret = malloc(get_maxstringlen(a, b) * sizeof(*a) + 1)) == NULL)
    return (NULL);
  la = my_strlen(a);
  lb = my_strlen(b);
  r = 0;
  while (la >= 0 || lb >= 0)
    {
      n = (a[la] - '0') * (b[lb] - '0') + r;
      (a[la] == 0) ? n = a[la] * (b[lb] - '0') + r;
      (b[lb] == 0) ? n = b[lb] * (a[la] - '0') + r;
      
      (la == )
    }
  
}
