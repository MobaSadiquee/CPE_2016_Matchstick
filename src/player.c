/*
** player.c for my_player in /home/sadiqu-m/delivery/C_prog_elem/CPE_2016_matchstick/src
** 
** Made by Sadiqu-m
** Login   <mobashir-ahmed.sadiquee@epitech.eu@epitech.net>
** 
** Started on  Mon Feb 20 13:11:05 2017 Sadiqu-m
** Last update Fri Feb 24 14:31:39 2017 Sadiqu-m
*/

#include "my.h"

int	player(int *match, int *space, int nb, int max)
{
  int	choice;
  int	retour;

  retour = 0;
  if ((choice = which_line(match, nb)) == 84)
    return (84);
  retour = player_choice(match, space, choice, max);
  if (retour == 84)
    return (84);
  else if (retour == 1)
    my_board(match, space, nb);
  return (0);
}

int	which_line(int *match, int nb)
{
  int	line;
  char	*read;

  while (42)
    {
      my_putstr("\nLine: ");
      if ((read = get_next_line(0)) == NULL)
	return (84);
      if ((line = my_getnbr(read)) == 101)
	my_exit_line(line, nb);
      else if (line > 0 && line < nb + 1)
	return (line - 1);
      else
	my_exit_line(line, nb);
      free(read);
    }
  return (0);
}

void	print_choice(int choice, int nb)
{
  my_putstr("Player removed ");
  my_put_nbr(nb);
  my_putstr(" match(es) from line ");
  my_put_nbr(choice);
  my_putchar('\n');
}

int	player_choice(int *line, int *space, int choice, int max)
{
  int	i;
  char	*read;

  i = 0;
  while (42)
    {
      my_putstr("Matches: ");
      if ((read = get_next_line(0)) == NULL)
	return (84);
      if ((i = my_getnbr(read)) == 101)
	my_putstr("Error: invalid input (positive number expected)\n");
      else if (i > 0 && i <= line[choice] && i <= max)
	{
	  line[choice] = line[choice] - i;
	  space[choice] = space[choice] + i;
	  print_choice((choice + 1), i);
	  return (1);
	}
      else
	my_exit_match(i, max, line, choice);
    }
  return (0);
}
