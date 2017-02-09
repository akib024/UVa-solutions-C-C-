#include<iostream>
#include<cstdio>
#include<cmath>
unsigned inp[1000001],nciv[1000001];
int main()
{
    unsigned i,j,N,t1,t2,total,count,k,x,rig;

    for(i=2;i<1000001;++i)
    {
        inp[i]=1;
        nciv[i]=1;
    }
    inp[1000001]='\0';
    for(i=4;i<1000001;i=i+2)
    inp[i]=0;
    for(i=3;i<1000001;i=i+2)
    {
        if(inp[i]==1)
        {
            for(j=2;(i*j)<1000001;++j)
            inp[i*j]=0;
        }
        else
        {
            for(j=1;(i*j)<1000001;++j)
            inp[i*j]=0;
        }
    }
    nciv[1] = 0;
    nciv[2] = 1;k = 1;rig = 1;
    for(i=3;i<1000001;i = i + 2)
    {
        if(inp[i])
        {
            total = 0;
            x = i;
            while(x)
            {
                total = total + x%10;
                x = x / 10;
            }
            if(inp[total])
            {
                nciv[i] = ++k;
                ++rig;
            }
        }
    }
    k = 2;
    for(i=3; i<1000001; ++i)
    {
        if(nciv[i]<(k+1))
        nciv[i]=k;
        else ++k;
    }
    scanf("%u",&N);
    ++N;
    while(--N)
    {
        count = 0;
        scanf("%u %u",&t1,&t2);
        printf("%u\n",nciv[t2] - nciv[t1-1]);
    }
    return 0;
}
