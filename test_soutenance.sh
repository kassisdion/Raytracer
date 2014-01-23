#!/bin/sh

if [ $# -ne 1 ]
then
    echo "Utilisation : ./test_soutenance.sh <numero de la config>"
    exit 0
fi

if [ -f rt ]
then
    echo "Lancement de la scene $1..."
else
    echo "Veuillez compiler le raytracer"
    exit 0
fi

if [ $1 = 1 ]
then
    ./rt config/tests_soutenance/test1_1_sphere_2_spot.rt;
elif [ $1 = 2 ]
then
    ./rt config/tests_soutenance/test2_1_plan_2_spot.rt;
elif [ $1 = 3 ]
then
    ./rt config/tests_soutenance/test3_1_sphere_2_spot_1_cylindre.rt;
elif [ $1 = 4 ]
then
    ./rt config/tests_soutenance/test4_1_cone_1_plan_2_spot.rt;
elif [ $1 = 5 ]
then
    ./rt config/tests_soutenance/test5_1_sphere_4_spot.rt;
elif [ $1 = 6 ]
then
    ./rt config/tests_soutenance/test6_1_sphere_1_spot_1_cone.rt;
elif [ $1 = 7 ]
then
    ./rt config/tests_soutenance/test7_4_cylindre_3_sphere_2_plan_2_spot.rt
else
    echo "désolé, la scene $1 n'existe pas"
fi

exit 0