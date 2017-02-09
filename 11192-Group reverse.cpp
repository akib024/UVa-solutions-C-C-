#include<stdio.h>
#include<string.h>
int main()
{
    unsigned G,i,j,t,len;
    char s[105];
    while(scanf("%u",&G))
    {
        if(G==0)break;
        getchar();
        gets(s);
        len = strlen(s);
        for(i=1; i<=G; ++i)
        {
            t = (len/G)*i - 1;
            for(j=1; j<=(len/G); ++j)
            printf("%c",s[t--]);
        }
        printf("\n");
    }
    return 0;
}
