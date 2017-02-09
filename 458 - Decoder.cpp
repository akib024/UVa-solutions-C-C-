#include<stdio.h>
int main()
{
    char mes[2000];
    int i;
    while(gets(mes))
    {
        for(i=0; mes[i]!='\0'; ++i)
        printf("%c",mes[i]-7);
        printf("\n");
    }
    return 0;
}
