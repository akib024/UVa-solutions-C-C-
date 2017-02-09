
#include<stdio.h>
int main()
{
    char tel[40];
    int i;
    while(gets(tel))
    {
        for(i=0; tel[i]!='\0'; ++i)
        {
            if(tel[i]>='A' && tel[i]<='Z')
            {if(tel[i]<='C')
            printf("2");
            else if(tel[i]<='F')
            printf("3");
            else if(tel[i]<='I')
            printf("4");
            else if(tel[i]<='L')
            printf("5");
            else if(tel[i]<='O')
            printf("6");
            else if(tel[i]<='S')
            printf("7");
            else if(tel[i]<='V')
            printf("8");
            else if(tel[i]<='Z')
            printf("9");}
            else
            printf("%c",tel[i]);
        }
        printf("\n");
    }
    return 0;
}
