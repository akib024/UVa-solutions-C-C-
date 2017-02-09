#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    {
        for(int i=1;i<=t;++i)
        {
            scanf("%d",&n);
            n = n * 63 ;
            n = n + 7492 ;
            n = n * 5 ;
            n = n - 498 ;
            n = n % 100 ;
            n = n / 10 ;
            if(n<0)
            n = n * (-1) ;
            printf("%d\n",n);
        }
    }
    return 0;
}
