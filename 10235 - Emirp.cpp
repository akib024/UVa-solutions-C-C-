#include<stdio.h>
int main()
{
    char inp[1000000];
    long long int i,j,value;
    for(i=2;i<1000000;++i)
    inp[i]=1;
    inp[1000000]='\0';
    for(i=4;i<1000000;i=i+2)
    inp[i]=0;
    for(i=3;i<=1000;i=i+2)
    {
        if(inp[i]==1)
        {
            for(j=2;(i*j)<1000000;++j)
            inp[i*j]=0;
        }
        else
        {
            for(j=1;(i*j)<1000000;++j)
            inp[i*j]=0;
        }
    }
    while(scanf("%lld",&value)!=EOF)
    {
        if(inp[value]==0)
        printf("%lld is not prime.\n",value);
        else
        {
            long long int x=0,n=value;
            while(n!=0)
            {
                x= x*10 + n%10;
                n= n/10;
            }
            if(inp[x]==1)
            {
                if(x!=value)
                printf("%lld is emirp.\n",value);
                else printf("%lld is prime.\n",value);
            }
            else printf("%lld is prime.\n",value);
        }
    }
    return 0;
}
