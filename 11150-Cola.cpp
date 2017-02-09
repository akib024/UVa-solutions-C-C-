#include<stdio.h>
int main()
{
    long long int cola,remain,total,a;
    while(scanf("%lld",&cola)!=EOF)
    {
        remain=cola;
        total=0;
        if(cola>=1 && cola<=200)
        while(remain>=3)
        {
            a=remain%3;
            remain=(remain/3)+a;
            total=total+remain-a;
        }
        if(remain==2)
        ++total;
        printf("%lld\n",cola+total);
    }
    return 0;
}
