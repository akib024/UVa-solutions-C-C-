#include<stdio.h>
int main()
{
    long long int value;
    while(1)
    {
        scanf("%lld",&value);
        if(value==0)break;
        if(value>=101)printf("f91(%lld) = %lld\n",value,value-10);
        else printf("f91(%lld) = 91\n",value);
    }
    return 0;
}
