/*
** main.c for pushswap in /home/dupard_e/rendus/CPE_2014_Pushswap
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Nov 27 12:42:50 2014 Erwan Dupard
** Last update Tue Dec  9 15:29:00 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "./pushswap.h"
#include "./list.h"
#include "./get_list.h"
#include "./operations.h"
#include "./include/my.h"

int		main(int argc, char **argv)
{
  t_list	*l_a;
  t_list	*l_b;

  l_a = NULL;
  l_b = NULL;
  if (argc < 3)
    {
      my_fprintf(2, "Pas assez d'arguments\n");
      return (0);
    }
  if (argc == 3)
    {
      if (atoi(argv[1]) > atoi(argv[2]))
	my_printf("sa");
      my_printf("\n");
      return (0);
    }
  get_list(&l_a, argc, argv);
  if (is_sorted_list(&l_a))
    return (0);
  while (!is_sorted_list(&l_a) || l_b != NULL)
    try_to_sort_list(&l_a, &l_b);
  my_printf("\n");
  return (0);
}
