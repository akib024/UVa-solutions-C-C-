#include<stdio.h>
#include<string.h>
int main()
{
    unsigned t,i,len;
    char num[6];
    scanf("%u",&t);
    getchar();
    for(i=1; i<=t; ++i)
    {
        gets(num);
        len = strlen(num);
        if(len == 3)
        {
            if((num[0]=='o' && num[1]=='n') || (num[0]=='o' && num[2]=='e') || (num[1]=='n' && num[2]=='e'))
            printf("1\n");
            else if((num[0]=='t' && num[1]=='w') || (num[0]=='t' && num[2]=='o') || (num[1]=='w' && num[2]=='o'))
            printf("2\n");
            else if((num[0]=='s' && num[1]=='i') || (num[0]=='s' && num[2]=='x') || (num[1]=='i' && num[2]=='x'))
            printf("6\n");
            else
            printf("10\n");
        }
        else if(len ==4 )
        {
            if((num[0]=='f' && num[1]=='o' && num[2]=='u') || (num[0]=='f' && num[1]=='o' && num[3]=='r') || (num[0]=='f' && num[2]=='u' && num[3]=='r') || (num[1]=='o' && num[2]=='u' && num[3]=='r'))
            printf("4\n");
            else if((num[0]=='f' && num[1]=='i' && num[2]=='v') || (num[0]=='f' && num[1]=='i' && num[3]=='e') || (num[0]=='f' && num[2]=='v' && num[3]=='e') || (num[1]=='i' && num[2]=='v' && num[3]=='e'))
            printf("5\n");
            else
            printf("9\n");
        }
        else
        {
            if((num[0]=='t' && num[1]=='h' && num[2]=='r' && num[3]=='e') || (num[0]=='t' && num[1]=='h' && num[2]=='r' && num[4]=='e') || (num[0]=='t' && num[1]=='h' && num[3]=='e' && num[4]=='e') || (num[0]=='t' && num[2]=='r' && num[3]=='e' && num[4]=='e') || (num[1]=='h' && num[2]=='r' && num[3]=='e' && num[4]=='e'))
            printf("3\n");
            else if((num[0]=='s' && num[1]=='e' && num[2]=='v' && num[3]=='e') || (num[0]=='s' && num[1]=='e' && num[2]=='v' && num[4]=='n') || (num[0]=='s' && num[1]=='e' && num[3]=='e' && num[4]=='n') || (num[0]=='s' && num[2]=='v' && num[3]=='e' && num[4]=='n') || (num[1]=='e' && num[2]=='v' && num[3]=='e' && num[4]=='n'))
            printf("7\n");
            else
            printf("8\n");
        }
    }
    return 0;
}
