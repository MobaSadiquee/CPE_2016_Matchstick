/*
** my_basic_nbr.c for my_basic_nbr in /home/sadiqu-m/delivery/Systeme_unix/PSU_2016_navy/src
** 
** Made by Sadiqu-m
** Login   <mobashir-ahmed.sadiquee@epitech.eu@epitech.net>
** 
** Started on  Tue Jan 31 10:55:06 2017 Sadiqu-m
** Last update Fri Feb 24 20:41:03 2017 Sadiqu-m
*/

#include "my.h"

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
  else
    my_putchar(nb + '0');
  return (0);
}

int	my_getnbr(char *str)
{
  int	i;
  int	r;
  int	x;

  i = 0;
  r = 0;
  x = 0;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	x = x - 1;
      i = i + 1;
    }
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	return (101);
      r = r * 10 + str[i] - '0';
      i++;
    }
  if (x == -1)
    r = -r;
  return (r);
}
