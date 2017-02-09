#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,z,a,b,c,d;
    while(scanf("%lf %lf %lf",&x,&y,&z)!=EOF)
    {
        if(x==0 || y==0 || z==0)
        printf("The radius of the round table is: 0.000\n");
        else
        {a = (x+y+z) / 2;
        a = sqrt((a-x) * (a-y) * (a-z) / a) ;
        printf("The radius of the round table is: %.3lf\n",a);}
    }
    return 0;
}
