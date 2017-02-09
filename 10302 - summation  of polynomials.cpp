#include<stdio.h>
int main()
{
    long long int in,out;
    while(scanf("%lld",&in)!=EOF)
    {
        out = in * (in + 1) / 2;
        printf("%lld\n",out*out);
    }
    return 0;
}
