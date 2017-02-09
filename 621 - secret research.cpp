#include<stdio.h>
#include<string.h>
int main()
{
    char inp[10000];
    int t,i,len;
    scanf("%d",&t);
    getchar();
    for(i=1; i<=t; ++i)
    {
        gets(inp);
        len = strlen(inp);
        if(inp[len-2]=='3' && inp[len-1]=='5')
        printf("-\n");
        else if(inp[0]=='9' && inp[len-1]=='4')
        printf("*\n");
        else if(inp[0]=='1' && inp[1]=='9' && inp[2]=='0')
        printf("?\n");
        else
        printf("+\n");
    }
    return 0;
}
