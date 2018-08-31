/*
** main.c for main in /home/sadiqu-m/delivery/C_prog_elem/CPE_2016_matchstick/src
** 
** Made by Sadiqu-m
** Login   <mobashir-ahmed.sadiquee@epitech.eu@epitech.net>
** 
** Started on  Mon Feb 20 13:15:46 2017 Sadiqu-m
** Last update Sun Feb 26 12:24:59 2017 Sadiqu-m
*/

#include "my.h"

int	game(int *match, int *space, int nb, int max)
{
  int	line;

  line = rest(match, nb);
  my_putchar('\n');
  while (line != 0)
    {
      my_putstr("Your turn:");
      if ((player(match, space, nb, max)) == 84)
	return (0);
      if (rest(match, nb) == 0)
	{
	  my_exit_lost();
	  return (2);
	}
      ia_play(match, space, nb, max);
      if (rest(match, nb) == 0)
	{
	  my_exit_win();
	  return (1);
	}
      my_putchar('\n');
    }
  return (0);
}

int	rest(int *match, int nb)
{
  int	i;
  int	n;

  i = 0;
  n = nb + 1;
  while (i <= nb)
    {
      if (match[i] == 0)
	n--;
      i++;
    }
  return (n);
}

void	free_mem(int *line, int *space)
{
  free(line);
  free(space);
}

int	main(int ac, char **av)
{
  int	*line;
  int	*space;
  int	nb;
  int	max;
  int	retour;

  if (ac != 3)
    {
      my_error("Usage: ./matchstick [nb] [max]\n");
      return (84);
    }
  else
    {
      if ((nb = my_getnbr(av[1])) <= 0 || nb > 100)
	return (84);
      if ((max = my_getnbr(av[2])) <= 0 || max > 100)
	return (84);
      space = malloc_space(nb);
      line = malloc_match(nb);
      my_board(line, space, nb);
      retour = game(line, space, nb, max);
      free_mem(line, space);
      return (retour);
    }
  return (0);
}
