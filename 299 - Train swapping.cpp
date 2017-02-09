#include<stdio.h>
int main()
{
    int t,x,i,j,ara[60],y,count,k;
    scanf("%d",&t);
    for(i=1;i<=t;++i)
    {
        count=0;
        scanf("%d",&x);
        for(j=0;j<x;++j)
        scanf("%d",&ara[j]);
        for(y=0;y<x-1;++y)
        for(j=0;j<x-1-y;++j)
        {
            if(ara[j]>ara[j+1])
            {
                ++count;
                k = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = k;
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",count);
    }
    return 0;
}
