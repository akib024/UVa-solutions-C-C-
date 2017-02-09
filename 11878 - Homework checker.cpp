#include<stdio.h>
#include<string.h>
int main()
{
    unsigned fir,mid,las,tot = 0,i,len;
    char hw[10],cap;
    while(gets(hw))
    {
        len = strlen(hw);
        if(hw[len]=='?')continue;
        fir = 0;
        mid = 0;
        las = 0;
        for(i=0; hw[i]>='0' && hw[i]<='9'; ++i)
        fir = fir*10 + hw[i] - 48;
        cap = hw[i];
        for(i = i +1; hw[i]>='0' && hw[i]<='9'; ++i)
        mid = mid*10 + hw[i] - 48;
        for(i = i +1; hw[i]!='\0'; ++i)
        las = las*10 + hw[i] - 48;
        if(cap=='+')
        {
            if(fir+mid == las)
            ++tot;
        }
        else
        {
            if(fir-mid == las)
            ++tot;
        }
    }
    printf("%u\n",tot);
    return 0;
}
