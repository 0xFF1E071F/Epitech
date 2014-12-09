/*
** crypt.c for 101 in /home/dupard_e/rendus/101Chiffrement
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov 25 12:06:14 2014 Erwan Dupard
** Last update Tue Nov 25 12:14:25 2014 Erwan Dupard
*/

#include "./include/my.h"
#include "./101.h"
#include "./crypt.h"

int		get_len(t_letter *msg)
{
  int		i;

  i = 0;
  while (msg[i].pos != -1)
    i++;
  return (i);
}

t_letter	*my_crypt_101(t_letter *msg, t_letter *key, int len)
{
  t_letter	*res;
  int		i;
  int		j;

  i = 0;
  j = 0;
  if ((res = malloc(len + 1)) == NULL)
    return (NULL);
  while (msg[i].pos != -1)
    {
      res[i].pos = msg[i].pos * key[j].pos;
      if (key[j].pos == -1)
	j = 0;
      i++;
    }
  return (res);
}
