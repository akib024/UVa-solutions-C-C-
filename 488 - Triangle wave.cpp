#include<stdio.h>
int main()
{
    int t,i,h,f,j,k,l;
    scanf("%d",&t);
    for(i=1; i<=t; ++i)
    {
        scanf("%d %d",&h,&f);
        for(j=1; j<=f; ++j)
        {
            for(k=1; k<=h; ++k)
            {
                for(l=1; l<=k; ++l)
                printf("%d",k);
                printf("\n");
            }
            for(k=h-1; k>=1; --k)
            {
                for(l=1; l<=k; ++l)
                printf("%d",k);
                printf("\n");
            }
            if(i<t || j<f)
            printf("\n");
        }
    }
    return 0;
}
