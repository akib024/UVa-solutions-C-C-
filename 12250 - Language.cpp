#include<stdio.h>
#include<string.h>
int main()
{
    unsigned j=1,len;
    char s[20];
    while(gets(s))
    {
        len = strlen(s);
        if(s[0]=='#' && len==1)break;
        printf("Case %u: ",j);
        ++j;
        if(len==5)
        {
            if(s[0]=='H' && s[1]=='E' && s[2]=='L' && s[3]=='L' && s[4]=='O')
            printf("ENGLISH\n");
            else if(s[0]=='H' && s[1]=='A' && s[2]=='L' && s[3]=='L' && s[4]=='O')
            printf("GERMAN\n");
            else
            printf("UNKNOWN\n");
        }
        else if(len==4)
        {
            if(s[0]=='H' && s[1]=='O' && s[2]=='L' && s[3]=='A')
            printf("SPANISH\n");
            else if(s[0]=='C' && s[1]=='I' && s[2]=='A' && s[3]=='O')
            printf("ITALIAN\n");
            else
            printf("UNKNOWN\n");
        }
        else if(len==7)
        {
            if(s[0]=='B' && s[1]=='O' && s[2]=='N' && s[3]=='J' && s[4]=='O' && s[5]=='U' && s[6]=='R')
            printf("FRENCH\n");
            else
            printf("UNKNOWN\n");
        }
        else if(len==12)
        {
            if(s[0]=='Z' && s[1]=='D' && s[2]=='R' && s[3]=='A' && s[4]=='V' && s[5]=='S' && s[6]=='T' && s[7]=='V' && s[8]=='U' && s[9]=='J' && s[10]=='T' && s[11]=='E')
            printf("RUSSIAN\n");
            else
            printf("UNKNOWN\n");
        }
        else
        printf("UNKNOWN\n");
    }
    return 0;
}
