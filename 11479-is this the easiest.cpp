#include<stdio.h>
int main()
{
    int t,q;
    long long int array[3];
    scanf("%d",&t);
    if (t>=1 && t<20)
    for(int count=1;count<=t;++count)
    {
        for(q=0;q<3;++q)
        scanf("%lld",&array[q]);
        if((array[0]+array[1])<=array[2] || (array[1]+array[2])<=array[0] || (array[2]+array[0])<=array[1])
        printf("Case %d: Invalid\n",count);
        else if(array[0]==array[1] && array[1]==array[2] && array[2]==array[0])
        printf("Case %d: Equilateral\n",count);
        else if(array[0]==array[1] || array[1]==array[2] || array[2]==array[0])
        printf("Case %d: Isosceles\n",count);
        else if(array[0]!=array[1] && array[1]!=array[2] && array[2]!=array[0])
        printf("Case %d: Scalene\n",count);
    }
    return 0;
}

