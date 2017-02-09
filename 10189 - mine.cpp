#include<stdio.h>
int main()
{
    char min[105][105];
    int i,j,count=1,m,n,row,column,total,ass=0;
    while(scanf("%d %d",&n,&m))
    {
        getchar();
        if(n==0 && m==0)break;
        for(i=1; i<=n; ++i)
        {
            for(j=1; j<=m; ++j)
            scanf("%c",&min[i][j]);
            getchar();
        }
        if(ass>0)printf("\n");
        ++ass;
        printf("Field #%d:\n",count);
        ++count;
        for(i=1; i<=n; ++i)
        {
            for(j=1; j<=m; ++j)
            {
                total = 0;
                if(min[i][j] == '*')
                printf("*");
                else
                {
                    if(j>1)
                    {
                        if(min[i][j-1]=='*')
                        ++total;
                        if(i>1 && min[i-1][j-1]=='*')
                        ++total;
                        if(i<n && min[i+1][j-1]=='*')
                        ++total;
                    }
                    if(j<m)
                    {
                        if(min[i][j+1]=='*')
                        ++total;
                        if(i>1 && min[i-1][j+1]=='*')
                        ++total;
                        if(i<n && min[i+1][j+1]=='*')
                        ++total;
                    }
                    if(i>1 && min[i-1][j]=='*')
                    ++total;
                    if(i<n && min[i+1][j]=='*')
                    ++total;
                    printf("%d",total);
                }

            }
            printf("\n");
        }
    }
    return 0;
}

