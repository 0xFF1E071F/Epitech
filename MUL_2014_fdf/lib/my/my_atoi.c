/*
** my_atoi.c for bistro in /home/dupard_e/rendus/Bistromathique/lib/my
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Oct 27 14:15:12 2014 Erwan Dupard
** Last update Mon Oct 27 14:16:37 2014 Erwan Dupard
*/

int		my_atoi(char *nptr)
{
  int		c;

  c = 0;
  while (*nptr >= '0' && *nptr <= '9')
    {
      c = c * 10;
      c = c + (*nptr) - '0';
      nptr++;
    }
  return (c);
}
