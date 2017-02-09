#include<stdio.h>
int main()
{
    int h,l,x;
    char inp[10];
    while(scanf("%d",&x))
    {
        getchar();
        if(x==0)break;
        l = 0; h = 11;

        while(gets(inp))
        {
            if(inp[4]=='l')
            {
                if(x>l)
                l = x;
            }
            else if(inp[4]=='h')
            {
                if(x<h)
                h = x;
            }
            else
            break;

            scanf("%d",&x);
            getchar();
        }
        if(h>x && l<x)
        printf("Stan may be honest\n");
        else
        printf("Stan is dishonest\n");
    }
    return 0;
}
