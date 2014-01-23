##
## Makefile for Makefile in /home/melowyss/systeme UNIX/minishell1-2017-caron_t
##
## Made by thomas caron
## Login   <caron_t@epitech.net>
##
## Started on  Tue Dec 18 14:46:45 2012 thomas caron
## Last update Fri Jun  7 09:48:53 2013 florian faisant

all:
		@tput cuf 68
		@tput cuu1
		@printf "\n===  "
		@tput setaf 3
		@tput bold
		@printf "Génération de la partie obligatoire ..."
		@tput sgr0
		@printf "  ===\n"
		@make -C source/mlx/

Bonus:
		@tput cuf 68
		@tput cuu1
		@printf "\n===  "
		@tput setaf 3
		@tput bold
		@printf "Génération du generaytracer ..."
		@tput sgr0
		@printf "  ===\n"
		@make -C source/gtk/


clean:
		@tput cuf 68
		@tput cuu1
		@printf "\n===  "
		@tput setaf 3
		@tput bold
		@printf "Clean de la partie obligatoire ..."
		@tput sgr0
		@printf "  ===\n"
		@make clean -C source/mlx/
		@tput cuf 68
		@tput cuu1
		@printf "\n===  "
		@tput setaf 3
		@tput bold
		@printf "Clean de la partie bonus ..."
		@tput sgr0
		@printf "  ===\n"
		@make clean -C source/gtk/

fclean:
		@tput cuf 68
		@tput cuu1
		@printf "\n===  "
		@tput setaf 2
		@tput bold
		@printf "Fclean de la partie obligatoire ..."
		@tput sgr0
		@printf "  ===\n"
		@make fclean -C source/mlx/
		@tput cuf 68
		@tput cuu1
		@printf "\n===  "
		@tput setaf 2
		@tput bold
		@printf "Fclean de la partie bonus ..."
		@tput sgr0
		@printf "  ===\n"
		@make fclean -C source/gtk/

re:		fclean all

Bonus_re:	fclean Bonus