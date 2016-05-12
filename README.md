# Raytracer
[![MIT licensed](https://img.shields.io/badge/license-MIT-blue.svg)](https://raw.githubusercontent.com/hyperium/hyper/master/LICENSE)

This a project i've done during my first years at Epitech.

Thx to Caron Thomas for the scene generator.

=========

## Demo
![sample1](https://github.com/kassisdion/Raytracer/blob/master/resource/sample/1fbf532b7231ba919be977c40152ea0e.png?raw=true)
![sample2](https://github.com/kassisdion/Raytracer/blob/master/resource/sample/26e229708a7f75c612271c5ed75de7f2.jpeg?raw=true)
![sample3](https://github.com/kassisdion/Raytracer/blob/master/resource/sample/8a518ed391bb85b96d6216bdbbe32782.png)

## Feature
* Texture
* Perlin deformation
* Deformation
* Mutiple light (with color)
* Preview mode
* 2 regulable anti-aliasing 
* Live deplacement
* global effect (black&white, sepia, negative, ...)

### Compilation :

#### MLX
* use the install_mlx.sh script (sudo ./script/install_mlx.sh)

#### Raytracer
* use the "make" command without any option into build the "classical" version
* Use the "make Bonus" command into build build the complete version (require GTK).

### Requirement :
* the "mlx library" (from Epitech) into compile the classical version
* GTK into compile the bonus

### Sample
* ./script/test_soutenance.sh [1-7]

### Usage :
./rt your_scene (or use ./rt config/[0-9] into see the sample)

### for more information :
* man ./man/raytracer
* man ./man/generaytracer
