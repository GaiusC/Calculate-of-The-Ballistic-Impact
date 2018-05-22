#include <stdio.h>
#include <math.h>
#include "lib.h"


int main()
{
    graph_of_func();
    double a;
    double b;
    double c;
    double d;

	printf("Please input the height of building\n");
	scanf("%lf", &a);//hob
	printf("Please input the v0\n");
	scanf("%lf", &b);//v0
	printf("Please input the angle\n");
	scanf("%lf", &c);//angle

    int x;
    LOOP:
        printf("DO you need the result at a specific time?\n");
        printf("1.yes     2.no\n");
        scanf("%d",&x);

        if(x==1)
        {
            double i;
            printf("What specific time is it?\n");
            scanf("%lf",&i);

            double z;
            z=height2_c(b,c,i,a);


            if(z<0)
            {
                printf("The height at the given time is 0.\n");
                distance2_c(b,c,i);
            }

            if(z>=0)
            {
                distance2_c(b,c,i);
                printf("The height at the given time is %lf meter(s).\n",z);
            }
        }
        if(x==2)
        {
            distance_c(b,c,a);
            height_c(b,c,a);
            time_c(b,c,a);
        }
        if(x!=1,x!=2)
        {
            goto LOOP;
        }
        return 0;
}
