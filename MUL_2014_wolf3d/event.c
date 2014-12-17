/*
** event.c for wolf3d in /home/dupard_e/rendus/MUL_2014_wolf3d
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Sun Dec 14 21:29:00 2014 Erwan Dupard
** Last update Sun Dec 14 21:29:18 2014 Erwan Dupard
*/

#include "./ressources.h"
#include "./include/my.h"

int		key_pressed(int keycode, void *param)
{
  my_printf("[*] Key Pressed : '0x%x'\n", keycode);
  param = param;
  if (keycode == 0xff1b)
    exit(1);
  return (1);
}
