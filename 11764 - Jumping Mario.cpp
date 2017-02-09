#include<stdio.h>
int main()
{
    int T,N,j[49],i,count,a,low;
    while(scanf("%d",&T)!=EOF)
    {if(T>0 && T<30)
    {
        for(a=1;a<=T;++a)
        {scanf("%d",&N);
        if(N>0 && N<50)
        {
            for(i=0;i<N;++i)
            scanf("%d",&j[i]);
           for(i=0;i<N;++i)
           if(j[i]<=0 || j[i]>10)break;
            count=0;
            low=0;
            if(j[i-1]>0 && j[i-1]<=10)
            {for(i=0;(i+1)<N;++i)
            {
                if(j[i+1]>j[i])
                ++count;
            }
            for(i=0;(i+1)<N;++i)
            {
                if(j[i+1]<j[i])
                ++low;
            }}


        printf("Case %d: %d %d\n",a,count,low);}
        }
    }}
    return 0;
}
