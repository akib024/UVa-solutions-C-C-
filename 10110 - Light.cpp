#include<stdio.h>
#include<math.h>
int main()
{
    long long int inp,i;
    long double f;
    while(1)
    {
        scanf("%lld",&inp);
        if(inp == 0)break;
        i=sqrt(inp);
        f=sqrt(inp);
        if(i==f)printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
