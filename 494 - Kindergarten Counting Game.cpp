#include<stdio.h>
#include<string.h>
int main()
{
    int i,count,len;
    char sent[500];
    while(gets(sent))
    {
        len = strlen(sent);
        count = 0;
        if(sent[0]>='A' && sent[0]<='Z' || sent[0]>='a' && sent[0]<='z')
        ++count;
        for(i=0; i<len-1; ++i)
        {
            if(((sent[i]>0 && sent[i]<65) || (sent[i]>90 && sent[i]<97) || sent[i]>122) && ((sent[i+1]>='A' && sent[i+1]<='Z') || (sent[i+1]>='a' && sent[i+1]<='z')))
            {
                ++count;
                ++i;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

