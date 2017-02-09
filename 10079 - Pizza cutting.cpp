#include<stdio.h>
int main()
{
    long long int piece,total;
    int count;
    while(1)
    {
        scanf("%lld",&piece);
        if(piece<0)break;
        if(piece>=0 && piece<=210000000)
        {
            total=0;count=1;
            while(count<=piece)
            {
                total=total+count;
                ++count;
            }
            printf("%lld\n",total+1);
        }
    }
    return 0;
}

