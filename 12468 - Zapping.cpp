#include<stdio.h>
int main()
{
    int a,b,x;
    while(scanf("%d %d",&a,&b))
    {
        if(a==-1 && b==-1)break;
        if(b>a)
        {
            x = b;
            b = a;
            a = x;
        }
        if(a-b<=49)
        printf("%d\n",a-b);
        else
        printf("%d\n",100 - a + b);
    }
    return 0;
}
