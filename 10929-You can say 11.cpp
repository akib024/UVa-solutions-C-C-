#include<stdio.h>
#include<string.h>
int main()
{
    char inp[1005];
    int i,x,y,z;
    while(scanf("%s",inp))
    {
        x = strlen(inp);--x;
        if(inp[0]=='0' && x==0)break;
        y = inp[0] - 48;
        for(i=0; i<x; ++i)
        {
            z = y*10 + inp[i+1] - 48;
            y = z%11;
        }
        if(y==0)
        printf("%s is a multiple of 11.\n",inp);
        else
        printf("%s is not a multiple of 11.\n",inp);
    }
    return 0;
}
