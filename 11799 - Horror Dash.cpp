#include<stdio.h>
int main()
{
    int t,n;
    long c,c1;
    scanf("%d",&t);
    if(t>0 && t<=50)
    for(int a=1;a<=t;++a)
    {
        scanf("%d",&n);
        if(n>=1 && n<=100)
        {
            c1=0;
            for(int b=1;b<=n;++b)
            {
                scanf("%ld",&c);
                if(c>=1 && c<=10000)
                {
                    if(c>c1)
                    c1=c;
                }
            }
            printf("Case %d: %ld\n",a,c1);
        }
    }
    return 0;
}

