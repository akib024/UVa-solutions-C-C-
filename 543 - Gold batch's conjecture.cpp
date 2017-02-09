#include<stdio.h>
int main()
{
    char inp[1000001];
    long long int i,j,value;
    for(i=2;i<1000001;++i)
    inp[i]=1;
    inp[1000001]='\0';

    for(i=4;i<1000001;i=i+2)
    inp[i]=0;

    for(i=3;i<=10000;i=i+2)
    {
        if(inp[i]==1)
        {
            for(j=2;(i*j)<=1000000;++j)
            inp[i*j]=0;
        }
        else
        {
            for(j=1;(i*j)<=1000000;++j)
            inp[i*j]=0;
        }
    }
    while(scanf("%lld",&value))
    {
        if(value==0)break;
        for(i=3;i<=value;i=i+2)
        if(inp[i]==1 && inp[value-i]==1)
        {
            printf("%lld = %lld + %lld\n",value,i,value-i);
            break;
        }



    }
    return 0;
}
