#include<stdio.h>
int main()
{
    long long int value;
    while(scanf("%lld",&value)!=EOF)
    {
        if(value<=999999)
        {
            if(value<0)
            {
                if((value%2)==0)
                printf("Underflow!\n");
                else printf("Overflow!\n");
            }
            else if(value<=7)
        printf("Underflow!\n");
        else if(value>=14)
        printf("Overflow!\n");
        else
        {long long int total=1;
        while(value>1)
        {
            total=total*value;
            --value;
        }
        printf("%lld\n",total);}}
    }
    return 0;
}
