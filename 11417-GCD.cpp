#include<stdio.h>
int main()
{
    int i,j,G,N,store,x,y;
    while(scanf("%d",&N))
    {
        if(N==0)break;
        G=0;
        for(i=1;i<N;i++)
        for(j=i+1;j<=N;j++)
        {
            x=i;y=j;
            while(y%x != 0)
            {
                store = y%x;
                y = x;
                x = store;
            }
            G+=x;
        }
        printf("%d\n",G);
    }
    return 0;
}
