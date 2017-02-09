#include<stdio.h>
int main()
{
    long long int a,b,c,d,count,i;
    scanf("%lld",&count);
    for(i=1;i<=count;++i)
    {
        scanf("%lld %lld",&a,&b);
        c=(a+b)/2;
        d=(a-b)/2;
        if((c+d)==a && (c-d)==b && d>=0)
        printf("%lld %lld\n",c,d);
        else printf("impossible\n");
    }
    return 0;
}
