/*
** my_match.c for my_match in /home/sadiqu-m/delivery/C_prog_elem/CPE_2016_matchstick/src
** 
** Made by Sadiqu-m
** Login   <mobashir-ahmed.sadiquee@epitech.eu@epitech.net>
** 
** Started on  Mon Feb 20 13:07:09 2017 Sadiqu-m
** Last update Mon Feb 20 19:49:11 2017 Sadiqu-m
*/

#include "my.h"

int	create_barre(int nb, char c)
{
  int	i;

  i = 0;
  while (i < nb)
    {
      my_putchar(c);
      i++;
    }
  return (0);
}

int	my_board(int *line, int *space, int nb)
{
  int	x;
  int	a;
  int	z;

  x = 0;
  z = 1;
  a = 0;
  while (a <= nb)
    a++;
  create_barre((a) + nb, '*');
  my_putchar('\n');
  while (x <= nb - 1)
    {
      create_barre(1, '*');
      create_barre(nb - z, ' ');
      create_barre(line[x], '|');
      create_barre(space[x], ' ');
      x++;
      z++;
      my_putchar('*');
      my_putchar('\n');
    }
  create_barre((x + 1) + nb, '*');
  my_putchar('\n');
  return (0);
}

int	*malloc_space(int nb)
{
  int	*space;
  int	i;
  int	j;

  if ((space = malloc(sizeof(int) * nb + 1)) == NULL)
    return (NULL);
  i = 0;
  j = nb - 1;
  while (i != nb)
    {
      space[i] = j;
      i++;
      j = j - 1;
    }
  return (space);
}

int	*malloc_match(int nb)
{
  int	*line;
  int	i;
  int	j;

  if ((line = malloc(sizeof(int) * nb + 1)) == NULL)
    return (NULL);
  i = 0;
  j = 1;
  while (i != nb)
    {
      line[i] = j;
      i++;
      j = j + 2;
    }
  return (line);
}
