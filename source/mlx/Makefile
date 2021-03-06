##
## Makefile for Makefile in /home/melowyss/systeme UNIX/minishell1-2017-caron_t
##
## Made by thomas caron
## Login   <caron_t@epitech.net>
##
## Started on  Tue Dec 18 14:46:45 2012 thomas caron
## Last update Wed Jan 22 16:48:53 2014 florian faisant

RACINE=		../..

REAL_NAME=	rt

NAME =		$(RACINE)/$(REAL_NAME)

CC=		gcc

RM=		rm -f

SRC=		source/main.c

SRC_PARSE=	$(RACINE)/source/parsing/get_eyes.c				\
		$(RACINE)/source/parsing/get_spot.c				\
		$(RACINE)/source/parsing/get_obj.c				\
		$(RACINE)/source/parsing/add_obj.c				\
		$(RACINE)/source/parsing/complete_struct.c			\
		$(RACINE)/source/parsing/complete_struct2.c

SRC_LIB=	$(RACINE)/lib/source/my_putchar.c				\
		$(RACINE)/lib/source/my_putstr.c				\
		$(RACINE)/lib/source/my_strlen.c				\
		$(RACINE)/lib/source/error.c					\
		$(RACINE)/lib/source/put_pixel_to_image.c			\
		$(RACINE)/lib/source/get_next_line.c				\
		$(RACINE)/lib/source/my_strcmp.c				\
		$(RACINE)/lib/source/my_str_to_word_tab.c			\
		$(RACINE)/lib/source/my_malloc.c				\
		$(RACINE)/lib/source/my_getnbr.c				\
		$(RACINE)/lib/source/my_put_in_list.c				\
		$(RACINE)/lib/source/my_getnbr_hexa.c				\
		$(RACINE)/lib/source/destroy_list.c				\
		$(RACINE)/lib/source/my_get_line.c				\
		$(RACINE)/lib/source/free_tab.c

SRC_INIT=	$(RACINE)/source/mlx/source/init/init_mlx/init_mlx.c		\
		$(RACINE)/source/mlx/source/init/init_scene/init_scene.c	\
		$(RACINE)/source/mlx/source/init/init_scene/init_vecteur.c

SRC_CALC=	$(RACINE)/source/mlx/source/calc/anti_aliasing.c		\
		$(RACINE)/source/mlx/source/calc/manage_calc.c			\
		$(RACINE)/source/mlx/source/calc/calc.c				\
		$(RACINE)/source/mlx/source/calc/first_anti_aliasing.c		\
		$(RACINE)/source/mlx/source/preview/calc_preview.c

SRC_AFF=	$(RACINE)/source/mlx/source/affichage/aff_image.c		\
		$(RACINE)/source/mlx/source/affichage/complete_img.c		\
		$(RACINE)/source/mlx/source/affichage/aff_pourcent.c

SRC_INTER=	$(RACINE)/source/mlx/source/inter/inter_plan.c			\
		$(RACINE)/source/mlx/source/inter/inter_sphere.c		\
		$(RACINE)/source/mlx/source/inter/inter_cylindre.c		\
		$(RACINE)/source/mlx/source/inter/inter_cone.c			\
		$(RACINE)/source/mlx/source/inter/utils.c			\
		$(RACINE)/source/mlx/source/inter/inter_parabo.c		\
		$(RACINE)/source/mlx/source/inter/inter_hyperbo.c

SRC_EVENT=	$(RACINE)/source/mlx/source/gestion_event/gestion_event.c

SRC_LIGHT=	$(RACINE)/source/mlx/source/light/each_light.c			\
		$(RACINE)/source/mlx/source/light/utils.c			\
		$(RACINE)/source/mlx/source/light/make_color.c			\
		$(RACINE)/source/mlx/source/light/multi_light.c			\
		$(RACINE)/source/mlx/source/light/other_light.c

SRC_SHADOW=	$(RACINE)/source/mlx/source/shadow/shadow.c			\
		$(RACINE)/source/mlx/source/shadow/each_shadow.c		\
		$(RACINE)/source/mlx/source/shadow/other_shadow.c

SRC_EFFECT=	$(RACINE)/source/mlx/source/effect/effect.c			\
		$(RACINE)/source/mlx/source/effect/each_effect.c		\
		$(RACINE)/source/mlx/source/effect/perlin_effect.c

SRC_PERLIN=	$(RACINE)/source/mlx/source/perlin/perlin.c			\
		$(RACINE)/source/mlx/source/perlin/perlin_coherent.c

SRC_MOVE=	$(RACINE)/source/mlx/source/move/rotation.c			\
		$(RACINE)/source/mlx/source/move/translation.c			\
		$(RACINE)/source/mlx/source/move/move_for_light.c

SRC_TEXTURE=	$(RACINE)/source/mlx/source/texture/texture.c

SRC_UTILS=	$(RACINE)/source/utils/event_mlx.c

SRC_COMMON=	$(SRC_LIB)		\
		$(SRC_PARSE)

SRC_RT=		$(SRC)			\
		$(SRC_INIT)		\
		$(SRC_CALC)		\
		$(SRC_AFF)		\
		$(SRC_INTER)		\
		$(SRC_EVENT)		\
		$(SRC_LIGHT)		\
		$(SRC_SHADOW)		\
		$(SRC_EFFECT)		\
		$(SRC_PERLIN)		\
		$(SRC_MOVE)		\
		$(SRC_TEXTURE)		\
		$(SRC_UTILS)

OBJ=		$(SRC_RT:.c=.o)		\
		$(SRC_COMMON:.c=.o)

CCFLAGS +=	-W			\
		-Wall			\
		-pedantic		\
		-Wextra			\
		-g			\
		-I$(RACINE)/include

OPTI_FLAG +=	-march=native		\
		-O3			\
		-msse			\
		-msse2			\
		-msse3			\
		-mmmx			\
		-m3dnow			\

LIBFLAG +=	-lmlx			\
		-lXext			\
		-lX11			\
		-lm

CFLAGS +=	$(CCFLAGS)		\
		$(OPTI_FLAG)

all:		$(NAME)

$(NAME):	$(OBJ)
		@$(CC) -o $(NAME) $(CFLAGS) $(OBJ) $(LIBFLAG)
		@tput setaf 3
		@tput bold
		@printf "Linkage   "
		@tput setaf 4
		@printf "%s\n" $(REAL_NAME)
		@tput sgr0
		@tput cuf 68
		@tput cuu1
		@printf "[ "
		@tput setaf 2
		@tput bold
		@printf "ok"
		@tput sgr0
		@printf " ]\n"


%.o:		%.c
		@tput setaf 3
		@tput bold
		@printf "Compiling "
		@tput setaf 4
		@printf "%s\n" $(patsubst $(RACINE)/%,%,$^)
		@$(CC) $(CFLAGS) -c -o $@ $^
		@tput sgr0
		@tput cuf 68
		@tput cuu1
		@printf "[ "
		@tput setaf 2
		@tput bold
		@printf "ok"
		@tput sgr0
		@printf " ]\n"

clean:
		@$(RM) $(OBJ)
		@tput setaf 3
		@tput bold
		@printf "RM \t "
		@tput setaf 4
		@printf " File [.o]\n"
		@tput sgr0
		@tput cuf 68
		@tput cuu1
		@printf "[ "
		@tput setaf 2
		@tput bold
		@printf "ok"
		@tput sgr0
		@printf " ]\n"

fclean:		clean
		@$(RM) $(NAME)
		@tput setaf 3
		@tput bold
		@printf "RM \t "
		@tput setaf 4
		@printf " %s\n" $(REAL_NAME)
		@tput sgr0
		@tput cuf 68
		@tput cuu1
		@printf "[ "
		@tput setaf 2
		@tput bold
		@printf "ok"
		@tput sgr0
		@printf " ]\n"

re:		fclean all