#include<stdio.h>
int main()
{
    unsigned test,i,rel[510],r,j,k,cap,tot;
    scanf("%u",&test);
    for(i=0; i<test; ++i)
    {
        tot = 0;
        scanf("%u",&r);
        for(j=0; j<r; ++j)
        scanf("%u",&rel[j]);
        for(j=0; j<r-1; ++j)
        for(k=0; k<r-1-j; ++k)
        if(rel[k]>rel[k+1])
        {
            cap = rel[k+1];
            rel[k+1] = rel[k];
            rel[k] = cap;
        }
        cap = r/2;
        for(j=0; j<cap; ++j)
        tot = tot + (rel[cap] - rel[j]);
        for(j=cap+1; j<r; ++j)
        tot = tot + (rel[j] - rel[cap]);
        printf("%u\n",tot);
    }
    return 0;
}
