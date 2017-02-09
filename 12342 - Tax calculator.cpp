#include<stdio.h>
int main()
{
    long int t,i,y;
    double money,total,x;
    scanf("%ld",&t);
    for(i=1; i<=t; ++i)
    {
        scanf("%lf",&money);
        if(money>0.0 && money<=180000.0)
        {
            printf("Case %ld: 0\n",i);
            continue;
        }
        else if(money>180000.0 && money<=480000.0)
        {
            if(money<=480000.0)
            x = money - 180000.0;
            total = (x*0.1);
            if(total>0.0 && total<2000.0)total = 2000.0;
        }
        else if(money>480000.0 && money<=880000.0)
        {
            if(money<=880000.0)
            x = money - 480000.0;
            total = (x*0.15) + 30000.0;
        }
        else if(money>880000.0 && money<=1180000.0)
        {
            if(money<=1180000.0)
            x = money - 880000.0;
            total = (x*0.2) + 90000.0;
        }
        else if(money>1180000.0)
        {
            x = money - 1180000.0;
            total = 150000.0 + (x*0.25);
        }
        y = total;
        if(y<total)++y;
        printf("Case %ld: %ld\n",i,y);
    }
    return 0;
}
