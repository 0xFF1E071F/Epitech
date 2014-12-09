/*
** bistromathique.h for bistro in /home/dupard_e/rendus/Bistromathique
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Mon Oct 27 14:09:28 2014 Erwan Dupard
** Last update Sat Nov  1 23:09:35 2014 Erwan Dupard
*/

#include <stdlib.h>

#ifndef _BISTROMATIQUE_H_
# define _BISTROMATIQUE_H_

# define	OP_OPEN_PARENT_IDX	0
# define	OP_CLOSE_PARENT_IDX	1
# define	OP_PLUS_IDX		2
# define	OP_SUB_IDX		3
# define	OP_NEG_IDX		3
# define	OP_MULT_IDX		4
# define	OP_DIV_IDX		5
# define	OP_MOD_IDX		6
# define	SYNTAXE_ERROR_MSG	"syntax error\n"

#endif /* !_BISTROMATIQUE_H_ */

char	*eval_expr(char *base, char *ops, char *expr, unsigned int size);
