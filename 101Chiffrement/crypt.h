/*
** crypt.h for 101 in /home/dupard_e/rendus/101Chiffrement
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Tue Nov 25 12:05:31 2014 Erwan Dupard
** Last update Tue Nov 25 12:14:22 2014 Erwan Dupard
*/

#ifndef CRYPT_H_
# define CRYPT_H_

#include "./101.h"

int		get_len(t_letter *msg);
t_letter	*my_crypt_101(t_letter *msg, t_letter *key, int len);

#endif	/* !CRYPT_H_ */
