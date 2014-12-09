
/*
** 101.h for 101 in /home/dupard_e/rendus/101Chiffrement
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov 25 11:12:46 2014 Erwan Dupard
** Last update Tue Nov 25 12:14:50 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "./101.h"
#include "./include/my.h"
#include "./crypt.h"

int		get_position(char f, char *alph)
{
  int		i;

  i = 0;
  while (alph[i])
    {
      if (f == alph[i] || f == (alph[i] - ('a' - 'A')))
	return (i);
      i++;
    }
  return (-1);
}

t_letter	*get_message(char *message)
{
  t_letter	*msg;
  int		i;

  i = 0;
  if ((msg = malloc(sizeof(*msg) * my_strlen(message) + 1)) == NULL)
    return (NULL);
  while (*message)
    {
      msg[i].pos = get_position(*message, " abcdefghijqlmnopqrstuvwxyz");
      msg[i].ascii = (int)*message;
      msg[i].f = *message;
      message++;
      i++;
    }
  msg[i].pos = -1;
  return (msg);
}

t_letter	*get_key(char **argv)
{
  t_letter	*key;

  if ((key = malloc(sizeof(*key) * 4 + 1)) == NULL)
    return (NULL);
  key[0].pos = my_getnbr(argv[2]);
  key[1].pos = my_getnbr(argv[3]);
  key[2].pos = my_getnbr(argv[4]);
  key[3].pos = my_getnbr(argv[5]);
  key[4].pos = -1;
  return (key);
}

int		main(int argc, char **argv)
{
  t_letter	*msg;
  t_letter	*key;
  t_letter	*res;
  char		*base;
  int		flag;

  if (argc != 8)
    {
      my_printf("Usage : %s <message> <nb1 nb2 nb3 nb4> <base> <flag>\n", argv[0]);
      return (0);
    }
  if ((msg = get_message(argv[1])) == NULL)
    return (1);
  if ((key = get_key(argv)) == NULL)
    return (1);
  base = argv[6];
  flag = my_getnbr(argv[7]);
  return (0);
  res = my_crypt_101(msg, key, get_len(msg));
}
