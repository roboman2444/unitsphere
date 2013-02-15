sphere.c
==========

Simple "random points on a unit sphere" generator
Released under WTFPL

So basically I (roboman2444) needed a bunch of points on a unit sphere for some glsl stuff.
I couldn't find any generators online, so i quickly slapped a tiny one together.
I later edited it and made it more user friendly.
It can output in vec3 format, and a readable, gnuplotable tab and newline seperated format.

Usage: ./sphere SAMPLES where SAMPLES is an integer. If SAMPLES is negative, then output will be tab and newline seperated. If SAMPLES is positive, then output will be in vec3(x,y,z), format.

COMPILING
=========
gcc -O3 sphere.c -lm -o sphere

yea... just do that.

LICENSE
==========
Copyright © 2013 Alex Gaines <roboman2444@gmail.com>
This work is free. You can redistribute it and/or modify it under the
terms of the Do What The Fuck You Want To Public License, Version 2,
as published by Sam Hocevar. See http://www.wtfpl.net/ for more details.

EXAMPLE
=========
http://i.imgur.com/Q4tIGrh.gif
Plotted using gnuplot and 50 Samples
Your browser might have a little trouble displaying it, but something like gpicview or imagemagick will work fine.
