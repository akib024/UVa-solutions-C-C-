#include<stdio.h>
#include <math.h>
int main()
{
    int cas,count=0;
    double u,v,t,s,a;
    while(1)
    {
        ++count;
        scanf("%d",&cas);
        if(cas==0)break;
        else if(cas==1)
        {
            scanf("%lf %lf %lf",&u,&v,&t);
            printf("Case %d: %.3lf %.3lf\n",count,(u+v)*t/2,(v-u)/t);
        }
        if(cas==0)break;
        else if(cas==2)
        {
            scanf("%lf %lf %lf",&u,&v,&a);
            printf("Case %d: %.3lf %.3lf\n",count,(v*v - u*u)/(2*a),(v-u)/a);
        }
        else if(cas==3)
        {
            scanf("%lf %lf %lf",&u,&a,&s);
            v=sqrt (u*u + 2*a*s);
            t=2*s/(u+v);
            printf("Case %d: %.3lf %.3lf\n",count,v,t);
        }
        else if(cas==4)
        {
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt (v*v - 2*a*s);
            t=(2*s)/(u+v);
            printf("Case %d: %.3lf %.3lf\n",count,u,t);
        }
    }
    return 0;
}
