#include <stdio.h>
int main()
{
   int t;
   long long int b,c;
   while(scanf("%d",&t)!=EOF)
   {
       if(t>=1 && t<15)
       for(int d=1;d<=t;++d)
       {
           scanf("%lld %lld",&b,&c);
           if(b>c)
           printf(">\n");
           else if(c>b)
           printf("<\n");
           else
           printf("=\n");
       }
   }
   return 0;
}


