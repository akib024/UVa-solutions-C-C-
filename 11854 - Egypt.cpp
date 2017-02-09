#include<stdio.h>
int main()
{
    int q;
    long long int a,b,c,array[3];
    while(1)
    {
         for(q=0;q<3;++q)
         scanf("%lld",&array[q]);
         a=array[0]*array[0];
         b=array[1]*array[1];
         c=array[2]*array[2];
         if(a==0 && b==0 && c==0)break;
         if((a+b)==c || (b+c)==a || (c+a)==b)
         printf("right\n");
         else
         printf("wrong\n");
    }
    return 0;
}
