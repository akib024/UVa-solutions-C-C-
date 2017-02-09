#include<stdio.h>
#include<string.h>
int main()
{
    char inp[105];
    int i,x,y,z;
    while(scanf("%s",inp))
    {
        x = strlen(inp);--x;
        if(inp[0]=='0' && x==0)break;
        y = inp[0] - 48;
        for(i=0; i<x; ++i)
        {
            z = y*10 + inp[i+1] - 48;
            y = z%17;
        }
        if(y==0)
        printf("1\n");
        else
        printf("0\n");
    }
    return 0;
}

