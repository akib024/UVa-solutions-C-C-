#include<stdio.h>
int main()
{
    int t,i,num[4],j,a,cap;
    scanf("%d",&t);
    for(i=1; i<=t; ++i)
    {
        cap = 0;
        for(j=0; j<4; ++j)
        {
            scanf("%d",&num[j]);
            if(num[j] == 0)
            ++cap;
        }
        if(cap>0)
        {
            printf("banana\n");
            continue;
        }
        for(j=0; j<3; ++j)
        for(a=0; a<3-j; ++a)
        if(num[a]>num[a+1])
        {
            cap = num[a];
            num[a] = num[a+1];
            num[a+1] = cap;
        }
        if(num[0] + num[1] + num[2] > num[3])
        {
            if(num[0] == num[1] && num[0] == num[2] && num[0] == num[3])
            printf("square\n");
            else if((num[0] == num[1]) && (num[2] == num[3]) && (num[1] != num[2]))
            printf("rectangle\n");
            else
            printf("quadrangle\n");
        }
        else
        printf("banana\n");
    }
    return 0;
}

