#include<stdio.h>
#include<math.h>
int main()
{
    char inp[1000001];
    unsigned i,j,value,N,sub,count;;
    for(i=2;i<1000001;++i)
    inp[i]=1;
    inp[1000001]='\0';
    for(i=4;i<1000001;i=i+2)
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
    while(scanf("%u",&N))
    {
        if(N==0)break;
        count = 0;
        printf("%u:\n",N);
        for(i = 2; i<=(N/2); )
        {
            if(inp[i]==1)
            {
                sub = N - i;
                if(inp[sub]==1)
                {
                    printf("%u+%u\n",i,sub);
                    count = 1;
                    break;
                }
                else if(i==2)++i;
                else i = i + 2;
            }
            else if(i==2)++i;
            else i = i + 2;
        }
        if(count == 0)
        printf("NO WAY!\n");
    }
    return 0;
}
