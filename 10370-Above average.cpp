#include<stdio.h>
int main()
{
    int t,i,a,std[1000];
    float avr,count,x;
    scanf("%d",&t);
    for(a=1;a<=t;++a)
    {
        avr = 0;
        scanf("%f",&x);
        for(i=0;i<x;++i)
        {
            scanf("%d",&std[i]);
            avr = avr + std[i];
        }
        count = 0;
        avr = avr / x;
        for(i=0;i<x;++i)
        if(std[i]>avr)++count;
        avr = (count / x) * 100 ;
        printf("%.3f%c\n",avr,'%');
    }
    return 0;
}
