#include<stdio.h>
#include<math.h>
int main()
{
    long long int n;
    int t,i,x;
    scanf("%d",&t);
    for(i=1; i<=t; ++i)
    {
        scanf("%lld",&n);
        x = (-1 + sqrt(1 + 8*n)) / 2;
        printf("%d\n",x);
    }
    return 0;
}

