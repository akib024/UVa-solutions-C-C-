#include<stdio.h>
int main()
{
    long long int n,a,c,k;
    scanf("%lld",&n);
    for(long long int i=1;i<=n;++i)
    {
        scanf("%lld",&k);
        for(a=2;;++a)
        if(k%a==0 && a!=(k/a))break;
        for(c=a+1;;++c)

            if(k%c==0 && k/a!=c && (k/c)>1 && c!=(k/c))break;
        printf("Case #%lld: %lld = %lld * %lld = %lld * %lld\n",i,k,a,k/a,c,k/c);
    }
    return 0;
}
