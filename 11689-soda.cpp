#include<stdio.h>
int main()
{
    int n,i,e,f,c,total;
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
    {
        total = 0;
        scanf("%d %d %d",&e,&f,&c);
        e = e + f;
        while(e/c!=0)
        {
            total = total + (e/c);
            e = e/c + e%c;
        }
        printf("%d\n",total);
    }
    return 0;
}
