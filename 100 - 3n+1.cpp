#include<stdio.h>
int main()
{
    long long int a,b,c;
    int count,count1;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        count1=1;
        if((a>0 && a<1000000) && (b>0 && b<1000000))
        {
            printf("%lld ",a);
            printf("%lld ",b);
            if(a>b)
            {
                c=b;
                b=a;
                a=c;
            }
            while(a<=b)
            {
                c=a;
                count=1;
                while(c!=1)
                {
                    if((c%2)==0)
                    c=c/2;
                    else
                    c= 3*c + 1;
                    ++count;
                }
                if(count>count1)
                count1=count;
                ++a;
            }
        }
        printf("%d\n",count1);
    }
    return 0;
}

