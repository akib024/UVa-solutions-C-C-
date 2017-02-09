#include<stdio.h>
int main()
{
    int N,i,n[10],count,j,marking;
    scanf("%d",&N);
    printf("Lumberjacks:\n");
    for(i=1; i<=N; ++i)
    {
        marking = 0;
        count = 0;
        for(j=0; j<10; ++j)
        {
            scanf("%d",&n[j]);
            if(j>0 && marking==0)
            {
                if(n[j]>n[j-1])
                marking = 1;
                else if(n[j]<n[j-1])
                marking = 2;
            }
        }
        if(marking==0)
        printf("Ordered\n");
        else
        {
            if(marking==1)
            {
                for(j=1; j<10 && count==0; ++j)
                if(n[j]<n[j-1])
                ++count;
            }
            else
            {
                for(j=1; j<10 && count==0; ++j)
                if(n[j]>n[j-1])
                ++count;
            }
            if(count == 0)
            printf("Ordered\n");
            else
            printf("Unordered\n");
        }
    }
    return 0;
}

