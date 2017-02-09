#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,len1,len2,count;
    char na1[30],na2[30];
    scanf("%d",&t);
    getchar();
    for(i=1; i<=t; ++i)
    {
        count = 0;
        len1 = strlen(gets(na1));
        len2 = strlen(gets(na2));
        if(len1 == len2)
        {
            for(j=0; j<len1; ++j)
            if(na1[j]!='a' && na1[j]!='e' && na1[j]!='i' && na1[j]!='o' && na1[j]!='u')
            if(na1[j]!=na2[j])
            {
                ++count;
                break;
            }
            if(count==0)
            printf("Yes\n");
            else
            printf("No\n");
        }
        else
        printf("No\n");
    }
    return 0;
}
