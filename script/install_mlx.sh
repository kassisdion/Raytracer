#! /bin/sh
HERE=$(dirname $0)
set -x

make -C $HERE/../minilibx #compiling the source
cp $HERE/../minilibx/mlx.h $HERE/../include/
cp $HERE/../minilibx/libmlx.a /usr/lib/
