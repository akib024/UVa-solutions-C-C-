#include<stdio.h>
int main()
{
    int i,x = 1;
    char sent[999];
    while(gets(sent))
    {
        for(i=0; sent[i]!='\0'; ++i)
        {
            if(sent[i] == '\"')
            {

                if(x%2!=0)
                printf("``");
                else
                printf("''");
                ++x;
            }
            else
            printf("%c",sent[i]);
        }
        printf("\n");
    }
    return 0;
}

