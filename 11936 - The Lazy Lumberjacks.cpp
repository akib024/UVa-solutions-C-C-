#include<stdio.h>
int main()
{
    int t,q;
    long long int array[3];
    while(scanf("%d",&t)!=EOF)
    {
        if (t>=2 && t<=20)
        for(int count=1;count<=t;++count)
        {
            for(q=0;q<3;++q)
            scanf("%lld",&array[q]);
            if((array[0]+array[1])<=array[2] || (array[1]+array[2])<=array[0] || (array[2]+array[0])<=array[1])
            printf("Wrong!!\n");
            else
            printf("OK\n");
        }
        return 0;
    }
}

