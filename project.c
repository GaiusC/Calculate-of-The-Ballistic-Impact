#include <stdio.h>
#include <math.h>
#define PI (3.14159265358979323846)
#define g (9.8)
//#define PI_DIV_180 (0.017453292519943296)//π/180
//#define DegToRad(x) ((x)*PI_DIV_180)//角度转换为弧度

double v0;
double time;
double height;
double distance;
double angle;
double hob;//height_of_building


void main()
{
    printf("Calculate-of-The-Ballistic-Impact\n");
    printf("  / v0\n");
    printf(" /\n");
    printf("/___distance\n\n");

    printf("Please input the height of building\n");
    scanf("%lf", &hob);
    printf("Please input the v0\n");
    scanf("%lf", &v0);
    printf("Please input the angle\n");
    scanf("%lf", &angle);

    angle = (angle/180)*PI;

height = hob + pow( v0 * sin(angle),2)/ (2*g) ;/*(v0*sinθ)²/2g*/
/*time = (2*v0*sin(angle))/g;//no building*/
time = ((2*v0*sin(angle))/g) + (sqrt((2*g*hob)+pow(v0*sin(angle),2))-v0*sin(angle))/g;
/*distance = pow(v0,2) * sin(2 * angle)/ g;//no building*/
distance = (((2*v0*sin(angle))/g) + (sqrt((2*g*hob)+pow(v0*sin(angle),2))-v0*sin(angle))/g)*v0*cos(angle);

printf("height =%lf \n", height);
printf("time =%lf \n", time);
printf("distance =%lf \n", distance);
}

/*int x,y;
printf("What do you want?\n1.Height and distance 2.time 3.both");
    scanf("%d", &x);
    if(x == 1 || x == 3)
    {
        printf("Do you need the data stream?\n1.Yes 2.No\n");
        scanf("%d",&y);
    }

    switch(x)
    {
        case    1:
            switch(y)
            {
                case 1:
                    hei_dis(V0, angle, 1);
                    break;

                case 2:
                    printf("height =%lf \n", height);
                    printf("distance =%lf \n", distance);
                    break;

                default:
                    printf("Wrong choice, please run this program again.");
            }
            break;

        case    2:
            printf("time =%lf \n", time);
            break;

        case    3:
            switch(y)
            {
                case 1:
                    hei_dis(V0, angle, 1);
                    time(V0, angle);
                    break;

                case 2:
                    printf("height =%lf \n", height);
                    printf("distance =%lf \n", distance);
                    break;

                default:
                    printf("Wrong choice, please run this program again.");
            }

        default:
            printf("Wrong choice, please run this program again.");
    }
    return 0;*/





