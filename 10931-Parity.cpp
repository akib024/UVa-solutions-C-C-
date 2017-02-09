#include<stdio.h>
int main()
{
   int a,count,c,i;
   int array[10000];
   while(scanf("%d",&a))
   {
       if(a==0)break;
       count=0;i=0;
       while(a!=0)
       {
        array[i]=a%2;
        a=a/2;
        if(array[i]==1)++count;
        ++i;
       }
       i=i-1;
       printf("The parity of ");
       while(i>=0)
       {
        printf("%d",array[i]);
        --i;
       }
       printf(" is %d (mod 2).\n",count);
   }
    return 0;
}
