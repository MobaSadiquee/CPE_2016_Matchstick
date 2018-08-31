##
## Makefile for Makefile in /home/sadiqu-m/delivery/Systeme_unix/PSU_2016_navy
## 
## Made by Sadiqu-m
## Login   <mobashir-ahmed.sadiquee@epitech.eu@epitech.net>
## 
## Started on  Mon Jan 30 15:07:30 2017 Sadiqu-m
## Last update Mon Feb 20 19:42:38 2017 Sadiqu-m
##

NAME            = matchstick

SRC             = ./src/my_basic_fonc.c \
		  ./src/my_basic_nbr.c \
		  ./src/get_next_line.c \
		  ./src/intell.c \
		  ./src/my_match.c \
		  ./src/my_message.c \
		  ./src/player.c \
		  ./src/main.c

CC              = gcc

RM              = rm -rf

OBJ             = $(SRC:.c=.o)

CFLAGS          = -I./include -I.

all:
	@make --no-print-directory $(NAME)

$(NAME):        $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:     fclean all
