#include<stdio.h>
int main()
{
    int n,m,t,i;
    scanf("%d",&t);
    for(i=1; i<=t; ++i)
    {
        scanf("%d %d",&n,&m);
        printf("%d\n",(n/3)*(m/3));
    }
    return 0;
}

