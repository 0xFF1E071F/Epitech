/*
** main.c for sapin in /home/dupard_e/rendu/Piscine_C_sapin
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Sun Oct  5 20:58:05 2014 Erwan Dupard
** Last update Sun Oct  5 21:10:05 2014 Erwan Dupard
*/

int		main(int argc, char **argv)
{
  int		n;

  if (argc < 2)
    return (0);
  n = -my_getnbr(argv[1]);
  if (n < 2 || n > 15)
    return (0);
  sapin(n);
}
