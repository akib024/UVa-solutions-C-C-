#include<stdio.h>
int main()
{
    int count,bottle;
    for(count=1;count<=10;++count)
    {
        scanf("%d",&bottle);
        if(bottle==0)break;
        bottle=bottle/2;
        printf("%d\n",bottle);
    }
    return 0;
}

