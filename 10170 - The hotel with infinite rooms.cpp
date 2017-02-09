#include<stdio.h>
int main()
{
    long long int s,d,i,total;
    while(scanf("%lld %lld",&s,&d)!=EOF)
    {
        total = 0;
        for(i=s; total<d; ++i)
        total = total + i;
        printf("%lld\n",i-1);
    }
    return 0;
}
