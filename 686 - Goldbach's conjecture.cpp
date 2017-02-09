#include<stdio.h>
int main()
{
    char inp[32767];
    long long int i,j,value,count;
    for(i=2;i<32767;++i)
    inp[i]=1;
    inp[32767]='\0';

    for(i=4;i<32767;i=i+2)
    inp[i]=0;

    for(i=3;i<=200;i=i+2)
    {
        if(inp[i]==1)
        {
            for(j=2;(i*j)<=32766;++j)
            inp[i*j]=0;
        }
        else
        {
            for(j=1;(i*j)<=32766;++j)
            inp[i*j]=0;
        }
    }
    while(scanf("%lld",&value))
    {
        count=0;
        if(value==0)break;
        for(i=2;i<(value/2) + 1;i=++i)
        if(inp[i]==1 && inp[value-i]==1)

            ++count;


             printf("%lld\n",count);





    }
    return 0;
}
