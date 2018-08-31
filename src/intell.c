/*
** intell.c for intell in /home/sadiqu-m/delivery/C_prog_elem/CPE_2016_matchstick/src
** 
** Made by Sadiqu-m
** Login   <mobashir-ahmed.sadiquee@epitech.eu@epitech.net>
** 
** Started on  Mon Feb 20 13:06:03 2017 Sadiqu-m
** Last update Tue Feb 21 20:27:23 2017 Sadiqu-m
*/

#include "my.h"

int	core_of_ia(int *match, int *space, int nb, int max)
{
  int	i;

  i = 0;
  while (i < nb + 1)
    {
      if (match[i] != 0)
	{
	  rmv_ia_match(match, i, space, max);
	  my_board(match, space, nb);
	  return (0);
	}
      else if (match[i] > 1)
	{
	  rmv_ia_match(match, i, space, max);
	  return (0);
	}
      i++;
    }
  return (0);
}

int	ia_play(int *match, int *space, int nb, int max)
{
  my_putstr("\nAI's turn...\n");
  core_of_ia(match, space, nb, max);
  return (0);
}

void	print_choice_ia(int choice, int nb)
{
  my_putstr("AI removed ");
  my_put_nbr(nb);
  my_putstr(" match(es) from line ");
  my_put_nbr(choice);
  my_putchar('\n');
}

int	rmv_ia_match(int *match, int line, int *space, int nb)
{
  int	rng;

  rng = rand() % nb + 1;
  if (rng > match[line])
    rng = 1;
  match[line] = match[line] - rng;
  space[line] = space[line] + rng;
  print_choice_ia(line + 1, rng);
  return (0);
}
