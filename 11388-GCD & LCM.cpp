#include <stdio.h>
int gcd(long long a,long long b)
{
    long long c;
    while(b!=0)
    {
      c=b;
      b=a%b;
      a=c;
    }
    return c;
}
int main()
{
    unsigned t,i,count,fact,j;
    long long g,l,family,x,factor[70],G,L;
    scanf("%u",&t);
    for(i=0; i<t; ++i)
    {
        scanf("%llu %llu",&G,&L);
        if(G==gcd(G,L))
        {
            printf("%llu %llu\n",G,L);
            continue;
        }
        count = 0;
        fact = 0;
        family = G * L;
        x=2;
        while((family/x)>0)
        {
            if((family%x)==0)
            {
                factor[++fact] = x;
                family = family / x;
            }
            else
            {
                if(x==2)++x;
                else x = x + 2;
            }
        }
        g = 1;
        for(j=1; j<=fact; ++j)
        {
            g = g * factor[j];
            l = family / g ;
            if(g==gcd(g,l))
            {
                printf("%llu %llu\n",g,l);
                ++count;
                break;
            }
        }
        if(count==0)
        printf("-1\n");

    }
    return 0;
}
