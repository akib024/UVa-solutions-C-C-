#include<stdio.h>
int main()
{

    unsigned long long int b1,b2,b3,g1,g2,g3,c1,c2,c3,total,min;
    while(scanf("%llu%llu%llu%llu%llu%llu%llu%llu%llu",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)!=EOF)
    {
        int cas;
        min = 2147483648;
        total = g2 + g3 + c1 + c3 + b1 + b2;
        if(total<=min)
        {
            min = total;
            cas = 1;
        }
        total = g2 + g3 + c1 + c2 + b1 + b3;
        if(total<=min)
        {
            min = total;
            cas = 2;
        }
        total = g1 + g3 + c2 + c3 + b1 + b2;
        if(total<=min)
        {
            min = total;
            cas = 3;
        }
        total = g2 + g1 + c2 + c3 + b1 + b3;
        if(total<=min)
        {
            min = total;
            cas = 4;
        }
        total = g1 + g3 + c1 + c2 + b3 + b2;
        if(total<=min)
        {
            min = total;
            cas = 5;
        }
        total = g2 + g1 + c1 + c3 + b3 + b2;
        if(total<=min)
        {
            min = total;
            cas = 6;
        }
        if(cas==1)
        printf("GCB %llu\n",min);
        else if(cas==2)
        printf("GBC %llu\n",min);
        else if(cas==3)
        printf("CGB %llu\n",min);
        else if(cas==4)
        printf("CBG %llu\n",min);
        else if(cas==5)
        printf("BGC %llu\n",min);
        else
        printf("BCG %lld\n",min);
    }
    return 0;
}

