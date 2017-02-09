#include<stdio.h>
int main()
{
    long int t,n,p,q,a,b,c,x[31],total;
    scanf("%ld",&t);
    for(a=1;a<=t;++a)
    {
        scanf("%ld %ld %ld",&n,&p,&q);
        for(b=0;b<n;++b)
        scanf("%ld",&x[b]);
        b=0;total=0;
        while(total<=q && b<p && b<n)
        {
            total = total + x[b];
            ++b;
        }
        if(total>q)--b;
        printf("Case %ld: %ld\n",a,b);
    }
    return 0;
}
