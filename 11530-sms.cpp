#include<stdio.h>
int main()
{
    int t,i,j,total;
    char sms[110];
    scanf("%d",&t);
    getchar();
    for(i=1; i<=t; ++i)
    {
        total = 0;
        gets(sms);
        for(j=0; sms[j]!='\0'; ++j)
        {
            switch(sms[j])
            {
                case 'g':
                case 'p':
                case 'a':
                case 'j':
                case 't':
                case 'd':
                case 'm':
                case 'w':
                case ' ':
                ++total;break;
                case 'h':
                case 'q':
                case 'b':
                case 'k':
                case 'u':
                case 'e':
                case 'n':
                case 'x':
                total = total + 2;break;
                case 'i':
                case 'r':
                case 'c':
                case 'l':
                case 'v':
                case 'f':
                case 'o':
                case 'y':
                total = total + 3;break;
                case 's':
                case 'z':
                total = total + 4;break;
            }
        }
        printf("Case #%d: %d\n",i,total);
    }
    return 0;
}
