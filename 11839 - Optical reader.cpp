#include<stdio.h>
int main()
{
    int t,i,o[5],count,x,j;
    char y[5];
    y[0]='A';y[1]='B';y[2]='C';y[3]='D';y[4]='E';
    while(scanf("%d",&t))
    {
        if(t==0)break;
        for(i=1;i<=t;++i)
        {
            count=0;
            for(j=0;j<5;++j)
            {
                scanf("%d",&o[j]);
                if(o[j]<=127)
                {
                    ++count;
                    x=j;
                }
            }
            if(count>1 || count<1)
            printf("*\n");
            else
            printf("%c\n",y[x]);
        }
    }
    return 0;
}

