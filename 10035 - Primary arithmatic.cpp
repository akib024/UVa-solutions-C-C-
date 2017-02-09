#include<stdio.h>
int main()
{
    long int in1,in2,a1[9],a2[9],c,i,total;
    while(scanf("%ld %ld",&in1,&in2))
    {
        if(in1==0 && in2==0)break;
        for(i=8;i>=0;--i)
        {
            a1[i]=in1%10;
            in1=in1/10;
            a2[i]=in2%10;
            in2=in2/10;
        }
        c=0;
        for(i=8;i>=0;--i)
        {
            total = a1[i] + a2[i] ;
            if(total>9)
            {++c;++a1[i-1];}
        }
        if(c>0)
        {
            if(c==1)printf("1 carry operation.\n");
            else printf("%ld carry operations.\n",c);
        }
        else printf("No carry operation.\n");
    }
    return 0;
}
