#include<stdio.h>
int main()
{
    long long int a=1,b=1,e;
    int count,d=0;
    while(1)
    {

        count=1;
        scanf("%lld %lld",&a,&b);
        if(a>b)continue;
        if(a<0 && b<0)break;
        e=a;
        while(e!=1)
        {

            if(e>b){--count;break;}
            if(e%2==0)
            e=e/2;
            else
            e=3*e+1;
            ++count;
        }
        ++d;
        printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n",d,a,b,count);
    }
    return 0;

}

