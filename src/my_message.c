/*
** my_message.c for my_message in /home/sadiqu-m/delivery/C_prog_elem/CPE_2016_matchstick/src
** 
** Made by Sadiqu-m
** Login   <mobashir-ahmed.sadiquee@epitech.eu@epitech.net>
** 
** Started on  Mon Feb 20 13:08:58 2017 Sadiqu-m
** Last update Thu Feb 23 16:12:38 2017 Sadiqu-m
*/

#include "my.h"

void	my_exit_line(int match, int nb)
{
  if (match >= nb)
    my_putstr("Error: this line is out of range");
  else if (match <= 0)
    my_putstr("Error: this line is out of range");
  else
    my_putstr("Error: invalid input (positive number expected)");
}

void	my_exit_match(int match, int max, int *line, int choice)
{
  if (match > line[choice])
    my_putstr("Error: not enough matches on this line\n");
  else if (match > max)
    {
      my_putstr("Error: you cannot remove more than ");
      my_put_nbr(max);
      my_putstr(" matches per turn\n");
    }
  else if (match <= 0)
    my_putstr("Error: you have to remove at least one match\n");
  else
    my_putstr("Error: invalid input (positive number expected)\n");
}

void	my_exit_lost()
{
  my_putstr("You lost, too bad...\n");
}

void	my_exit_win()
{
  my_putstr("I lost... snif... but I'll get you next time!!\n");
}
