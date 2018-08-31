/*
** my.h for myh in /home/sadiqu-m/delivery/Systeme_unix/PSU_2016_navy/include
** 
** Made by Sadiqu-m
** Login   <mobashir-ahmed.sadiquee@epitech.eu@epitech.net>
** 
** Started on  Mon Jan 30 15:40:37 2017 Sadiqu-m
** Last update Fri Feb 24 20:53:51 2017 Sadiqu-m
*/

#ifndef MY_H_
# define MY_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	my_putchar(char c);
void	my_putstr(char *str);
void    print_choice_ia(int choice, int nb);
int	my_error(char *str);
int	my_strlen(char *str);
int	my_basic_nbr(int nb);
int	my_put_nbr(int nb);
int	my_getnbr(char *str);
int	game(int *match, int *space, int nb, int max);
int	rest(int *match, int nb);
int     core_of_ia(int *match, int *space, int nb, int max);
int     ia_play(int *match, int *space, int nb, int max);
int     rmv_ia_match(int *match, int line, int *space, int nb);
int     create_barre(int nb, char c);
int     my_board(int *line, int *space, int nb);
int     *malloc_space(int nb);
int     *malloc_match(int nb);
int     player(int *match, int *space, int nb, int max);
int     which_line(int *match, int nb);
int     player_choice(int *line, int *space, int choice, int max);
char	*my_realloc(char *str);
char	get_fd(const int fd, int option);
char	*get_next_line(const int fd);
void    my_exit_line(int match, int nb);
void    my_exit_match(int match, int max, int *line, int choice);
void    my_exit_lost();
void    my_exit_win();

#ifndef READ_SIZE
# define READ_SIZE 4096

#endif /* READ_SIZE */
#endif /* MY_H_ */
