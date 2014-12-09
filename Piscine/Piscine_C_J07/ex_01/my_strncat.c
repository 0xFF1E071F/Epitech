/*
** my_strcat.c for my_strcat in /home/dupard_e/rendu/Piscine_C_J07
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Oct  7 12:02:11 2014 Erwan Dupard
** Last update Wed Oct  8 18:39:00 2014 Erwan Dupard
*/

char		*my_strncat(char *dest, char *src, int nb)
{
  int		l;
  int		i;

  i = 0;
  l = my_strlen(dest);
  while (src[i] && nb != 0)
    {
      dest[l] = src[i];
      l++;
      i++;
      nb--;
    }
  dest[l + 1] = 0;
  return (dest);
}
