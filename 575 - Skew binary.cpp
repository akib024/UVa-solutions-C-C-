#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char inp[32];
    int i,total,len;
    while(gets(inp))
    {
        total = 0;
        if(inp[0]=='0')break;
        len = strlen(inp);
        for(i=0; len!=0; ++i,--len)
        total = total +  (inp[i] - 48)*(pow(2,len) - 1);
        printf("%d\n",total);
    }
    return 0;
}
