#include <stdio.h>
int main()
{
    char t;
    float h,m,ang,M;
    while(scanf("%f %c %f",&h,&t,&m))
    {
        if(h==0.00 && m==0.00)break;
        if(h==12.00 && m==0.00)
        {
            printf("0.000\n");
            continue;
        }
        if(h==12.00)
        h = 0.00;
        ang = h*30.00 - m*6.00 + (m/2.00);
        if(ang<0)
        ang = ang*(-1.00);
        if(ang>180)
        printf("%.3f\n",360-ang);
        else
        printf("%.3f\n",ang);
    }
    return 0;
}
