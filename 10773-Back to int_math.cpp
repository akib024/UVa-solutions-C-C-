#include<stdio.h>
#include<math.h>
int main()
{
    long int a,i;
    double d,u,v,ts,td;
    scanf("%ld",&a);
    for(i=1;i<=a;++i)
    {
        scanf("%lf %lf %lf",&d,&u,&v);
        if(u>=v || v==0 || u==0)printf("Case %ld: can't determine\n",i);
        else
        {
            ts = d/sqrt(v*v - u*u);
            td = d/v;
            printf("Case %ld: %.3lf\n",i,ts-td);
        }
    }
    return 0;
}
