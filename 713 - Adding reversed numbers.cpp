#include<stdio.h>
#include<string.h>
int main()
{
    unsigned num1[210],num2[210],num3[210],i,j,k,t,len1,len2,len;
    char Num1[210],Num2[210];
    scanf("%u",&t);
    for(k=0; k<t; ++k)
    {
        scanf("%s %s",Num1,Num2);
        len1 = strlen(Num1);
        len2 = strlen(Num2);
        if(len2>len1)
        {
            len = len2;
            for(i=len1; i<len; ++i)
            Num1[i] = '0';
        }
        else
        {
            len = len1;
            for(i=len2; i<len; ++i)
            Num2[i] = '0';
        }
        for(i=0; i<=len; ++i)
        num3[i] = 0;
        for(i=0; i<len; ++i)
        {
            num3[i] = num3[i] + Num1[i] + Num2[i] - 96;
            if(num3[i]>9)
            {
                ++num3[i+1];
                num3[i] = num3[i]%10;
            }
        }
        for(i=0; i<len; ++i)
        if(num3[i]!=0)break;
        for(j=i; j<len; ++j)
        printf("%u",num3[j]);
        if(num3[len]>0)printf("%u",num3[len]);
        printf("\n");
    }
    return 0;
}
