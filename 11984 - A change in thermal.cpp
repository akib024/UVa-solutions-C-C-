#include<stdio.h>
int main()
{
    int t,c,f;
    float a,x,y;
    scanf("%d",&t);
    if(t>0 && t<=100)
    for(int count=1;count<=t;++count)
    {
        scanf("%d %d",&c,&f);
        if(0<=c && f<=100)
        {
            x=c;y=f;
            a=x+(y/9)*5;
            printf("Case %d: %.2f\n",count,a);
        }
    }
    return 0;
}
