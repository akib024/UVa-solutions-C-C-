#include<stdio.h>
int main()
{
    long int inp,ara[1000],i,a;
    while(scanf("%ld",&inp))
    {
        i=0;
        if(inp<0)break;
        while(inp!=0)
        {
            ara[i]=inp%3;
            inp=inp/3;
            a=i;
            ++i;
        }
        for(i=a;i>=0;--i)
        printf("%ld",ara[i]);
        if(i<0)printf("\n");
    }
    return 0;
}
