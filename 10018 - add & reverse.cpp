#include<stdio.h>
int main()
{
    long long int num,rev=0,a;
    int count,no;
    scanf("%d",&count);
    for(int b=1;b<=count;++b)
    {
        scanf("%lld",&num);
        a=num;
        no=0;

        while(1)
        {
            rev=0;
            while(a!=0)
            {
                rev=rev*10 + a%10;
                a=a/10;

            }
            if((rev-num)==0)break;
            else
            {
                num=num+rev;
                a=num;
                ++no;
            }
        }
        if(no<1000 && rev<=4294967295)
        printf("%d %lld\n",no,rev);
        continue;
    }
    return 0;
}
