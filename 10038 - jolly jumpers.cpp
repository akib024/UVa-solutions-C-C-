#include<stdio.h>
#include<stdlib.h>
int main()
{
    int jol[3001],dif[3002],i,t,j,count,x;
    while(scanf("%d",&t)!=EOF)
    {
        for(i=0; i<t; ++i)
        {scanf("%d",&jol[i]);
        if(i!=0)
        dif[i] = abs(jol[i] - jol[i-1]);}
        count=0;


        for(i=1;i<t;++i)
        for(j=1;j<t-i;++j)
        {
            if(dif[j]>dif[j+1])
            {
                x = dif[j];
                dif[j] = dif[j+1];
                dif[j+1] = x;
            }
        }
        for(i=1;i<t;++i)
        if(dif[i]!=i)
        {++count;break;}

        if(count==0)
        printf("Jolly\n");
        else
        printf("Not jolly\n");
    }
    return 0;
}
