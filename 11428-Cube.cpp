#include<stdio.h>
int main()
{
    int N,x,y;
    while(scanf("%d",&N))
    {
        if(N==0)break;
        for(y=1;y<59;++y)
        {
            for(x=y+1;x<61;++x)
            if((x*x*x - y*y*y)==N)break;
            if((x*x*x - y*y*y)==N)break;
        }
        if(y<59)
        printf("%d %d\n",x,y);
        else
        printf("No solution\n");
    }
    return 0;
}
