#include <stdio.h>
int main()
{
   int a,b,c;
   while(scanf("%d",&a)!=EOF)
   {
       if(a>=1 && a<=100)
       for(int d=1;d<=a;++d)
       {
           scanf("%d %d",&b,&c);
           if(b>=0 && b<100 && c>=0 && c<=100)
           {
               int total=0;
               while(b<=c)
               {
                   if((b%2)!=0)
                   total=total+b;
                   ++b;
               }
               printf("Case %d: %d\n",d,total);
           }
       }
   }
   return 0;
}

