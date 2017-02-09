#include<stdio.h>
int main()
{
    char space[510];
    unsigned t,k,line,i,j,count = 0;
    scanf("%u",&t);
    for(k=1; k<=t; ++k)
    {
        scanf("%u",&line);

        if(count == 1)printf("\n");
        count = 1;

        printf("Case %u:\n",k);
        getchar();
        for(i=0; i<line; ++i)
        {
            gets(space);
            for(j=0; space[j]!='\0'; ++j)
            {
                if(space[j]==' ' && space[j+1]!=' ')
                printf(" ");
                else if(space[j]==' ')continue;
                else printf("%c",space[j]);
            }

            printf("\n");
        }
    }
    return 0;
}
