#include <stdio.h>
#include <math.h>
#include <stdio.h>
#define PI 3.14159265358979323846
#define g 9.8

#include "lib.h"

void graph_of_func()
{
    printf("Calculate-of-The-Ballistic-Impact\n");
	printf("                                      height \n");
	printf("                                        | \n ");
	printf("                                   ||||||||||\n ");
	printf("                              ||||||||||||||||||\n");
	printf("                           ||||||||||||||||||||||||||\n ");
	printf("                      |||||||||||||||||||||||||||||||||||\n ");
	printf("                    |||||||||||||||||||||||||||||||||||||||\n ");
	printf("                 ||||||||||||||||||||||||||||||||||||||||||||\n ");
	printf("               ||||||||||||||||||||||||||||||||||||||||||||||||\n ");
	printf("             |||||||||||||||||||||||||||||||||||||||||||||||||||| \n ");
	printf("           ||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n ");
	printf("         ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("        ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("      ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("    ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("v0/||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| __distance\n");
	printf(" @                                                    \n");
}

void height_c(double v0,double angle,double hob)
{
    double height;
	height=hob+pow(v0*sin((angle / 180)*PI),2)/(2*g);/*(v0*sinθ)²/2g*//*time = (2*v0*sin(angle))/g;//no building*/
	printf("The height is %lf meter(s).\n",height);
}

void time_c(double v0,double angle,double hob)
{
    double time;
	time=((2*v0*sin((angle / 180)*PI))/g)+(sqrt((2*g*hob)+pow(v0*sin((angle / 180)*PI),2))-v0*sin((angle / 180)*PI))/g;
	printf("The time is %lf second(s).\n",time);
	/*distance = pow(v0,2) * sin(2 * angle)/ g;//no building*/
}

void distance_c(double v0,double angle,double hob)
{
    double distance;
	distance =(((2*v0*sin((angle / 180)*PI))/g)+(sqrt((2*g*hob)+pow(v0*sin((angle / 180)*PI),2))-v0*sin((angle / 180)*PI))/g)*v0*cos((angle / 180)*PI);
	printf("The distance is %lf second(s).\n",distance);
}

void distance2_c(double v0,double angle,double time2)
{
    double distance2;
	distance2=v0*time2*cos((angle/180)*PI);/*distance2=v0*time2*cos(angle/180)*PI);*/
	printf("The distance at the given time is %lf meter(s).",distance2);
}

double height2_c(double v0,double angle,double time2,double hob)
{
    double height2;
	height2 = hob + ((v0 * sin((angle / 180)*PI) * time2) - (g * pow(time2, 2)) / 2);
	return height2;
}
