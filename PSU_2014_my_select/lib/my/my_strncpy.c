/*
** my_strncpy.c for my_strnspy in /home/dupard_e/rendu/Piscine_C_J06/ex_1
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Oct  6 08:59:03 2014 Erwan Dupard
** Last update Mon Oct 20 15:53:37 2014 Erwan Dupard
*/

int		my_strlen(char *str);

char		*my_strncpy(char *dest, char *src, int n)
{
  int		i;
  char		c;
  int		save;

  i = 0;
  save = n;
  while (src[i] != 0 && n != 0)
    {
      c = src[i];
      dest[i] = c;
      i++;
      n--;
    }
  if (my_strlen(src) < save)
    dest[i] = '\0';
  return (dest);
}
