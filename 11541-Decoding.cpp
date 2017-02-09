#include<stdio.h>
int main()
{
    char inp[210];
    int t,i,x,j,k,a;
    scanf("%d",&t);
    getchar();
    for(i=1; i<=t; ++i)
    {
        gets(inp);
        printf("Case %d: ",i);
        for(j=0; inp[j]!='\0'; ++j)
        {
            if(inp[j]>='0' && inp[j]<='9')
            {
                x = 0;
                k = j - 1;
                while(inp[j]>='0' && inp[j]<='9')
                {
                    x = x*10 + (inp[j] - 48);
                    ++j;
                }
                for(a=1; a<=x; ++a)
                printf("%c",inp[k]);
                --j;
            }

        }
        printf("\n");
    }
    return 0;
}
