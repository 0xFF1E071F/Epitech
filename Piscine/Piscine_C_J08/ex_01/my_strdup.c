/*
** my_strdup.c for my_strdup in /home/dupard_e/rendu/Piscine_C_J08/ex_01
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Oct  8 09:25:00 2014 Erwan Dupard
** Last update Thu Oct  9 17:06:31 2014 Erwan Dupard
*/

char		*my_strdup(char *src)
{
  int		length;
  int		i;
  char		*s;

  i =0;
  length = my_strlen(src);
  s = malloc(length);
  while (i != length)
    {
      s[i] = src[i];
      ++i;
    }
  s[i] = '\0';
  return (&s[i - length]);
}
