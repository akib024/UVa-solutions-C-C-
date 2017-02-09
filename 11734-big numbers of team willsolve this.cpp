#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,jism,lent,lenj,space,k;
    char judge[30],team[30],teamt[30];
    scanf("%d",&t);
    getchar();
    for(i=1; i<=t; ++i)
    {
        jism = 0;
        space = 0;
        gets(team);
        gets(judge);
        lent = strlen(team);
        lenj = strlen(judge);
        if(lent>lenj)
        {
            for(j=0,k=0; j<lent; ++j)
            {
                if(team[j] == ' ')continue;
                teamt[k++] = team[j];
            }
            for(j=0; judge[j]!='\0'; ++j)
            {
                if(teamt[j]!=judge[j])
                {
                    ++jism;
                    break;
                }
            }
            if(jism!=0)
            printf("Case %d: Wrong Answer\n",i);
            else
            printf("Case %d: Output Format Error\n",i);
        }
        else
        {
            for(j=0; judge[j]!='\0'; ++j)
            {
                if(team[j]!=judge[j])
                {
                    ++jism;
                    break;
                }
            }
            if(jism!=0)
            printf("Case %d: Wrong Answer\n",i);
            else
            printf("Case %d: Yes\n",i);
        }

    }
    return 0;
}
