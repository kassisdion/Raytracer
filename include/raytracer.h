/*
** raytracer.h for raytracer in /home/florian/raytracer/include
** 
** Made by florian faisant
** Login   <faisan_f@epitech.eu>
** 
** Started on  Fri Apr  5 10:38:49 2013 florian faisant
** Last update Wed Jan 22 17:03:17 2014 florian faisant
*/

#ifndef RAYTRACER_H_
# define RAYTRACER_H_

# define POW(X) ((X)*(X))
# define RAD(a) ((a * 3.141592653589793) / 180)

/* windo size*/
# define SIZE_WIN_X		(1200)
# define SIZE_WIN_Y		(900)

# define PREVIEW_MODE		(1)
# define AFF_MODE		(1)
# define FONT_MODE		(0)

# define PRECISION_MOVE		(50)

/*light option*/
# define LIGHT_PRECISION	(1)
# define SPOT_POWER		(100)

/*anti_aliasing option*/
# define ANTI_ALIASING		(20)
# define ANTI_POWER		(76)
# define FIRST_ANTI_ALIASING	(2)

/*shadow option*/
# define BURNED_SHADOW		(0)
# define SHADOW_MODE		(0)

/*color filter*/
# define NEGATIVE_COLOR		(0)
# define SEPIA_COLOR		(0)
# define CYANO_COLOR		(0)
# define BLACK_WHITE_COLOR	(0)

# define FONT			(-10)
# define NO_SHADOW		(-5)

# define SUCCES			(0)
# define FAIL			(-1)

# define ZOOM			(65453)
# define DEZOOM			(65451)
# define UP			(65362)
# define DOWN			(65364)
# define LEFT			(65361)
# define RIGHT			(65363)
# define EXIT			(65307)
# define ENTER			(65293)
# define SPACE			(32)

# define SPHERE			(1)
# define PLAN			(2)
# define CYLINDRE		(3)
# define CONE			(4)
# define PARABO			(5)
# define HYPERBO		(6)

# define IMG_SPHERE		"./resource/forme/sphere.png"
# define IMG_PLAN		"./resource/forme/plan.png"
# define IMG_CYLINDRE		"./resource/forme/cylindre.png"
# define IMG_CONE		"./resource/forme/cone.png"
# define IMG_PARABO		"./resource/forme/para.png"
# define IMG_HYPERBO		"./resource/forme/hyper.png"
# define IMG_GENE		"./resource/logo.png"

# define SEA			"resource/texture/sea.xpm"
# define WOOD			"resource/texture/wood.xpm"
# define STONE			"resource/texture/stone.xpm"
# define BLUE			"resource/texture/bluesquares.xpm"
#endif /* !RAYTRACER_H_ */
