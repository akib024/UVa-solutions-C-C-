#include<stdio.h>
#include<math.h>
#define pi 3.141592653589793
int main()
{
    double x1,x2,x3,y1,y2,y3,x,y,radious,a1,a2,a3,a4,b1,b2,circumference;
    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        a1 = x1 - x2;
        a2 = y1 - y2;
        b1 = (x1*x1 - x2*x2 + y1*y1 - y2*y2) / 2;
        a3 = x1 - x3;
        a4 = y1 - y3;
        b2 = (x1*x1 - x3*x3 + y1*y1 - y3*y3) / 2;
        y = (a1*b2 - a3*b1) / (a1*a4 - a2*a3);
        x = (a2*b2 - a4*b1) / (a2*a3 - a4*a1);
        radious = sqrt((x - x1)*(x - x1) + (y - y1)*(y - y1));
        circumference = 2*pi*radious ;
        printf("%.2lf\n",circumference);
    }
    return 0;
}
