#include<stdio.h>
#include<math.h>
int main()
{
    long double a;
    long long int b,val1,val2,count;
    while(1)
    {
        scanf("%lld %lld",&val1,&val2);
        if(val1==0 && val2==0)break;
        count=0;
        for(val1;val1<=val2;++val1)
        {
            a=sqrt(val1);
            b=sqrt(val1);
            if((a-b)==0)++count;
        }
        printf("%lld\n",count);
    }
    return 0;
}
