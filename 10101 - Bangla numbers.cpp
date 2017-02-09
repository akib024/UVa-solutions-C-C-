#include<stdio.h>
int main()
{
    long long int y,inp,i,a,x=0;
    while(scanf("%lld",&y)!=EOF)
    {
        ++x;
        printf("%4lld.",x);
        a=0;inp=y;
        i = inp/100000000000000;
        if(i>0) {printf(" %lld kuti",i);a=1;}
        inp = inp%100000000000000;
        i = inp/1000000000000;
        if(i>0) {printf(" %lld lakh",i);a=1;}
        inp = inp%1000000000000;
        i = inp/10000000000;
        if(i>0) {printf(" %lld hajar",i);a=1;}
        inp = inp%10000000000;
        i = inp/1000000000;
        if(i>0) {printf(" %lld shata",i);a=1;}
        inp = inp%1000000000;
        i = inp/10000000;
        if(i>0) printf(" %lld kuti",i);
        else if(a==1) printf(" kuti");
        inp = inp%10000000;
        i = inp/100000;
        if(i>0) printf(" %lld lakh",i);
        inp = inp%100000;
        i = inp/1000;
        if(i>0) printf(" %lld hajar",i);
        inp = inp%1000;
        i = inp/100;
        if(i>0) printf(" %lld shata",i);
        inp = inp%100;
        i = inp/1;
        if(i>0) printf(" %lld",i);
        if(y==0) printf(" 0");
        printf("\n");

    }
    return 0;
}
