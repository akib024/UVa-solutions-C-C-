#include<stdio.h>
#include<string.h>
int main()
{
    char year[100001];
    int x4,x100,x400,x15,x55,i,x,ass=0;
    while(scanf("%s",&year)==1)
    {
        x4=0;x100=0;x400=0;x15=0;x55=0;
        x = strlen(year);
        if(ass>0)
        printf("\n");
        ++ass;
        for(i=0; i<x; ++i)
        {
            x4 = (x4*10 + year[i] - 48)%4;
            x100 = (x100*10 + year[i] - 48)%100;
            x400 = (x400*10 + year[i] - 48)%400;
            x15 = (x15*10 + year[i] - 48)%15;
            x55 = (x55*10 + year[i] - 48)%55;
        }
        if(x4==0 && x100!=0 || x400==0)
        {
            printf("This is leap year.\n");
            if(x15==0)
            printf("This is huluculu festival year.\n");
            if(x55==0)
            printf("This is bulukulu festival year.\n");
        }
        else
        {
            if(x15==0)
            printf("This is huluculu festival year.\n");
            else
            printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
