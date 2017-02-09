#include<stdio.h>
int main()
{
    long long int cigarette,butt,remain,total,a;
    while(scanf("%lld %lld",&cigarette,&butt)!=EOF)
    {
        remain=cigarette;
        total=0;
        if(butt>1)
        while(remain>=butt)
        {
            a=remain%butt;
            remain=(remain/butt)+a;
            total=total+remain-a;
        }
        printf("%lld\n",cigarette+total);
    }
    return 0;
}
