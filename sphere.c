/*
Copyright © 2013 Alex Gaines <roboman2444@gmail.com>
This work is free. You can redistribute it and/or modify it under the
terms of the Do What The Fuck You Want To Public License, Version 2,
as published by Sam Hocevar. See http://www.wtfpl.net/ for more details.
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(int argc,char *argv[]){
	void printerror(){
		printf("Usage: ./sphere SAMPLES    where SAMPLES is an integer.\nIf SAMPLES is negative, then output will be tab and newline seperated\nIf SAMPLES is positive, then output will be in vec3(x,y,z), format.\nPoints on a unit sphere generator written quickly by Roboman2444\n");
		exit(1);
	}
	bool usevec3;

	if(argc !=2)	printerror();
	int samples = atoi(argv[1]); //conv input to an int
	if(samples==0)	printerror();
	else if(samples>0) usevec3 = true;
	else if(samples<0) usevec3 = false;
	samples = abs(samples);
	int 	    i;
	const float divvy = (float)(RAND_MAX)/2; // between 0 and 2
	for(i = 0; i < samples; ++i){
		float x = (float)rand()/divvy - 1.0f; // now between -1 and 1
		float y = (float)rand()/divvy - 1.0f;
		float z = (float)rand()/divvy - 1.0f;
		// get length
		float length = sqrt(x*x+y*y+z*z);
		// normalize
		x /= length;
		y /= length;
		z /= length;
		if(usevec3){
			printf("vec3(%.8f, %.8f, %.8f)",x,y,z);
			if(i<samples -1) printf(", ");
		}
		else printf("%.8f\t%.8f\t%.8f\n",x,y,z);
	}
	printf("\n");
	return 0;
}
