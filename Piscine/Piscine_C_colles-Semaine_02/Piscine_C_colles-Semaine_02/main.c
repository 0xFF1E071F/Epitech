/*
** main.c for Piscine_C_colles-Semaine_02 in /home/dupard_e/rendus/Piscine_C_colles-Semaine_02
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Sat Oct 11 11:35:03 2014 Erwan Dupard
** Last update Sat Oct 11 21:45:42 2014 Erwan Dupard
*/

int		main(int argc, char **argv)
{
  int		nb;

  if (argc <= 1)
    {
      my_putstr("Pas assez d'arguments\n");
      return (0);
    }
  if (argc < 3)
    colle(argv[1], 500000);
  if (argc > 2)
    {
      nb = my_getnbr(argv[2]);
      if (nb < 0)
	{
	  my_putstr("Nombre trop petit\n");
	  return (0);
	}
      else
	colle(argv[1], nb);
    }
  return (0);
}
