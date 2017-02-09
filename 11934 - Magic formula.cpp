#include<stdio.h>
int main()
{
    long long int a,b,c,d,l,i,count,total;
    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&l))
    {
        count=0;
        if(a==0 && b==0 && c==0 && d==0 && l==0)break;
        for(i=0; i<=l; ++i)
        {
            total = a*i*i + b*i + c;
            if(total%d == 0)++count;
        }
        printf("%lld\n",count);
    }
    return 0;
}
