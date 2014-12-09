/*
** operations.c for pushswap in /home/dupard_e/rendus/CPE_2014_Pushswap
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Thu Nov 27 18:19:04 2014 Erwan Dupard
** Last update Tue Dec  9 17:46:26 2014 Erwan Dupard
*/

#include <stdlib.h>
#include "./list.h"
#include "./operations.h"
#include "./include/my.h"

void		sa(t_list **l_a)
{
  int		tmp;
  t_list	*e;

  e = *l_a;
  if (e->nxt != NULL)
    {
      tmp = e->nb;
      e->nb = (e->nxt)->nb;
      (e->nxt)->nb = tmp;
    }
  my_printf("sa ");
}

void		sb(t_list **l_b)
{
  int		tmp;
  t_list	*e;

  e = *l_b;
  if (e->nxt != NULL)
    {
      tmp = e->nb;
      e->nb = (e->nxt)->nb;
      (e->nxt)->nb = tmp;
    }
  my_printf("sb ");
}

void		ss(t_list **l_a, t_list **l_b)
{
  sa(l_a);
  sb(l_b);
  my_printf("ss ");
}

void		pa(t_list **l_a, t_list **l_b)
{
  t_list	*new;
  t_list	*save;

  new = malloc(sizeof(*new));
  new->nb = (*l_b)->nb;
  new->nxt = *l_a;

  *l_a = new;
  save = *l_b;
  *(l_b) = (*l_b)->nxt;
  free(save);
  my_printf("pa ");
}

void		pb(t_list **l_a, t_list **l_b)
{
  t_list	*new;
  t_list	*save;

  new = malloc(sizeof(*new));
  new->nb = (*l_a)->nb;
  new->nxt = *l_b;
  *l_b = new;
  save = *l_a;
  *(l_a) = (*l_a)->nxt;
  free(save);
  my_printf("pb ");
}

void		ra(t_list **l_a)
{
  t_list	*save;
  t_list	*to_past;
  t_list	*tmp;

  tmp = *l_a;
  to_past = *l_a;
  to_past->nxt = NULL;
  save = ((*l_a)->nxt);
  while (tmp->nxt)
    tmp = tmp->nxt;
  tmp->nxt = to_past;
  *l_a = save;
  my_printf("ra ");
}

void		rb(t_list **l_b)
{
  t_list	*save;
  t_list	*to_past;
  t_list	*tmp;

  tmp = *l_b;
  to_past = *l_b;
  to_past->nxt = NULL;
  save = ((*l_b)->nxt);
  while (tmp->nxt)
    tmp = tmp->nxt;
  tmp->nxt = to_past;
  *l_b = save;
  my_printf("rb ");
}

void		rra(t_list **l_a)
{
  t_list	*new;
  t_list	*e;

  new = malloc(sizeof(*new));
  new->nxt = *l_a;
  *l_a = new;
  e = *l_a;
  while (e->nxt->nxt)
    e = e->nxt;
  new->nb = e->nxt->nb;
  e->nxt = NULL;
  my_printf("rra ");
}

void		rr(t_list **l_a, t_list **l_b)
{
  ra(l_a);
  rb(l_b);
}
