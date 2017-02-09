#include<stdio.h>
int main()
{
    int n,i,h[50],x,y,a=0,total;
    while(1)
    {
        ++a;total=0;
        scanf("%d",&n);
        if(n==0)break;
        if(n>0 && n<51)
        {
            for(i=0;i<n;++i)
            {
                scanf("%d",&h[i]);
                if(h[i]<1 || h[i]>100)break;
                total=total+h[i];
            }
            x=0;y=0;
            if(total%n==0){total=total/n;
            for(i=0;i<n;++i)
            {
                if(h[i]>total)
                x=x+(h[i]-total);
            }
            printf("Set #%d\nThe minimum number of moves is %d.\n\n",a,x+y);}
        }
    }
    return 0;
}
