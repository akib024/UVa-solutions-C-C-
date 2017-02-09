#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[10010];
    unsigned i,t,j,k;
    int dhor;
    float len;
    scanf("%u",&t);
    getchar();
    for(i=0; i<t; ++i)
    {
        gets(s);
        len = strlen(s);
        len = sqrt(len);
        if(len != ceil(len))
        printf("INVALID\n");
        else
        {
            for(j=0; j<len; ++j)
            {
                dhor = j - len;
                for(k=0; k<len; ++k)
                printf("%c",s[dhor = dhor + len]);
            }
            printf("\n");
        }
    }
    return 0;
}
