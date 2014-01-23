##
## Makefile for Makefile in /home/melowyss/systeme UNIX/minishell1-2017-caron_t
##
## Made by thomas caron
## Login   <caron_t@epitech.net>
##
## Started on  Tue Dec 18 14:46:45 2012 thomas caron
## Last update Fri Jun  7 22:50:59 2013 Caron Thomas

RACINE=		../..

REAL_NAME=	generaytracer

NAME=		$(RACINE)/$(REAL_NAME)

CC=		gcc

RM=		rm -f

SRC_GEN_MAIN=	$(RACINE)/source/main.c						\
		$(RACINE)/source/error/error_gtk.c

SRC_PARSE=	$(RACINE)/source/parsing/get_eyes.c				\
		$(RACINE)/source/parsing/get_spot.c				\
		$(RACINE)/source/parsing/get_obj.c				\
		$(RACINE)/source/parsing/add_obj.c				\
		$(RACINE)/source/parsing/rm_obj.c				\
		$(RACINE)/source/parsing/complete_struct.c			\
		$(RACINE)/source/parsing/complete_struct2.c

SRC_LIB=	$(RACINE)/lib/source/error_gtk.c				\
		$(RACINE)/lib/source/my_putchar.c				\
		$(RACINE)/lib/source/my_putstr.c				\
		$(RACINE)/lib/source/my_strlen.c				\
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

SRC_CALLBACK=	$(RACINE)/source/gtk/callback/generate.c			\
		$(RACINE)/source/gtk/callback/new_projet.c			\
		$(RACINE)/source/gtk/callback/new_objet.c			\
		$(RACINE)/source/gtk/callback/open.c				\
		$(RACINE)/source/gtk/callback/save.c				\
		$(RACINE)/source/gtk/callback/save_as.c				\
		$(RACINE)/source/gtk/callback/help.c				\
		$(RACINE)/source/gtk/callback/about.c				\
		$(RACINE)/source/gtk/callback/duck_ballon.c			\
		$(RACINE)/source/gtk/callback/eyes.c				\
		$(RACINE)/source/gtk/callback/change_eyes.c			\
		$(RACINE)/source/gtk/callback/option.c				\
		$(RACINE)/source/gtk/callback/select_item.c			\
		$(RACINE)/source/gtk/callback/select_spot.c			\
		$(RACINE)/source/gtk/callback/change_pos.c			\
		$(RACINE)/source/gtk/callback/change_s_pos.c			\
		$(RACINE)/source/gtk/callback/change_color.c			\
		$(RACINE)/source/gtk/callback/change_s_color.c			\
		$(RACINE)/source/gtk/callback/change_rot.c			\
		$(RACINE)/source/gtk/callback/change_lim.c			\
		$(RACINE)/source/gtk/callback/change_lim_two.c			\
		$(RACINE)/source/gtk/callback/obj_type.c			\
		$(RACINE)/source/gtk/callback/obj_effect.c			\
		$(RACINE)/source/gtk/callback/change_brillance.c		\
		$(RACINE)/source/gtk/callback/change_ray.c			\
		$(RACINE)/source/gtk/callback/change_def.c			\
		$(RACINE)/source/gtk/callback/anti_aliasing.c			\
		$(RACINE)/source/gtk/callback/new_spot.c			\
		$(RACINE)/source/gtk/callback/change_option_rt.c		\
		$(RACINE)/source/gtk/callback/change_s_power.c			\

SRC_UTILS =	$(RACINE)/source/utils/event_gtk.c				\

SRC_INIT_GTK=	$(RACINE)/source/gtk/init/init_eyes_win.c			\
		$(RACINE)/source/gtk/init/init_index.c				\
		$(RACINE)/source/gtk/init/init_changtype.c			\
		$(RACINE)/source/gtk/init/init_changeeffect.c			\
		$(RACINE)/source/gtk/init/init_window.c				\
		$(RACINE)/source/gtk/init/init_surface.c			\
		$(RACINE)/source/gtk/init/init_sp_surface.c			\
		$(RACINE)/source/gtk/init/init_option.c				\
		$(RACINE)/source/gtk/init/init_edition.c			\
		$(RACINE)/source/gtk/init/init_help.c				\
		$(RACINE)/source/gtk/init/init_win.c				\
		$(RACINE)/source/gtk/init/init_file.c				\
		$(RACINE)/source/gtk/init/init_thread.c				\

SRC_DRAW=	$(RACINE)/source/gtk/draw/pos_box.c				\
		$(RACINE)/source/gtk/draw/get_image.c				\
		$(RACINE)/source/gtk/draw/info_gtk.c				\
		$(RACINE)/source/gtk/draw/update_val.c				\
		$(RACINE)/source/gtk/draw/update_val_spot.c			\

SRC_GTK_FUNC=	$(RACINE)/source/gtk/gtk_fuction/menu_item_new.c		\
		$(RACINE)/source/gtk/gtk_fuction/new_frame.c			\
		$(RACINE)/source/gtk/gtk_fuction/new_check_button.c		\
		$(RACINE)/source/gtk/gtk_fuction/new_button.c			\
		$(RACINE)/source/gtk/gtk_fuction/new_spin.c			\
		$(RACINE)/source/gtk/gtk_fuction/new_scale.c			\
		$(RACINE)/source/gtk/gtk_fuction/unit_box.c

SRC_WRT=	$(RACINE)/source/write/write_conf.c				\
		$(RACINE)/source/write/write_obj.c

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
		$(RACINE)/source/mlx/source/affichage/aff_pourcent.c		\

SRC_INTER=	$(RACINE)/source/mlx/source/inter/inter_plan.c			\
		$(RACINE)/source/mlx/source/inter/inter_sphere.c		\
		$(RACINE)/source/mlx/source/inter/inter_cylindre.c		\
		$(RACINE)/source/mlx/source/inter/inter_cone.c			\
		$(RACINE)/source/mlx/source/inter/utils.c			\
		$(RACINE)/source/mlx/source/inter/inter_parabo.c		\
		$(RACINE)/source/mlx/source/inter/inter_hyperbo.c

SRC_EVENT=	$(RACINE)/source/utils/gestion_event.c				\

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
		$(RACINE)/source/mlx/source/move/move_for_light.c		\

SRC_TEXTURE=	$(RACINE)/source/mlx/source/texture/texture.c			\

SRC_COMMON=	$(SRC_LIB)		\
		$(SRC_PARSE)

SRC_GENE=	$(SRC_GEN_MAIN)		\
		$(SRC_MLX)		\
		$(SRC_PARS)		\
		$(SRC_WRT)		\
		$(SRC_CALLBACK)		\
		$(SRC_INIT_GTK)		\
		$(SRC_DRAW)		\
		$(SRC_GTK_FUNC)		\
		$(SRC_UTILS)

SRC_RT=		$(SRC_INIT)		\
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

OBJ=		$(SRC_GENE:.c=.o)	\
		$(SRC_RT:.c=.o)		\
		$(SRC_COMMON:.c=.o)

CCFLAGS +=	-W				\
		-I$(RACINE)/include		\
		`pkg-config --cflags gtk+-2.0`	\
		`pkg-config --cflags cairo`

OPTI_FLAG +=	-march=native			\
		-O3				\
		-msse				\
		-msse2				\
		-msse3				\
		-mmmx				\
		-m3dnow				\

LIBFLAG +=	-lz				\
		`pkg-config --libs gtk+-2.0`	\
		`pkg-config --libs cairo`	\
		-lmlx				\
		-lXext				\
		-lX11				\
		-lm				\
		-lpthread

CNOFLAGS +=	-Wno-unused-parameter	\
		-Wno-format-security

CFLAGS +=	$(CCFLAGS)	\
		$(OPTI_FLAG)	\
		$(CNOFLAGS)

all:		$(NAME)

$(NAME):	$(OBJ)
		@$(CC) -o $(NAME) $(CFLAGS) $(OBJ) $(LIBFLAG)
		@tput setaf 3
		@tput bold
		@printf "\nLinkage   "
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
		@printf "RM   \t"
		@tput setaf 4
		@printf "  File [.o]\n"
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
		@printf "RM   \t"
		@tput setaf 4
		@printf "  %s\n" $(REAL_NAME)
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