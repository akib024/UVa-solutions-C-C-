#include<stdio.h>
#include<math.h>
int main()
{
    int k,time,j,lucky[60],in;
    double i,X,out,N;
    scanf("%d",&time);
    for(k=1; k<=time; ++k)
    {
        scanf("%lf",&N);
        printf("Case %d:",k);
        for(i=1,j=0; i*i<N; ++i)
        {
            X = N - i*i;
            out = X / i;
            in = X / i;
            if(out==in)
            lucky[j++] = X;
        }
        for(j = j - 1; j>=0; --j)
        printf(" %d",lucky[j]);
        printf("\n");
    }
    return 0;
}
