#include<stdio.h>
#include<math.h>
int lcm( long long int a, long long int b)
{
    long long int c,d,e;
    {
        d=a;
        e=b;
        while(e!=0)
        {
            c=e;
            e=d%e;
            d=c;
        }
    }
    return ((a*b)/c);
}
int main()
{
    long long int N,factor[1000],i,j,x,divisor,pair,dhor;
    while(scanf("%lld",&N))
    {
        if(N==0)break;
        if(N==1){printf("1 1\n");continue;}
        x = 0;
        divisor = 2;
        pair = 0;
        for(i = 2; i<=sqrt(N); ++i)
        {
            if(N%i==0)
            {
                factor[x++] = i;
                factor[x++] = N/i;
                divisor = divisor + 2;
                if(N/i==i)--divisor;
            }
        }
        for(i = 0; i<x-1; ++i)
        for(j = i+1 ; j<x; ++j)
        if(lcm(factor[i],factor[j])==N)++pair;
        printf("%lld %lld\n",N,pair + divisor);
    }
    return 0;
}

