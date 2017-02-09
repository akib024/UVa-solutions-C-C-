#include<stdio.h>
int main()
{
    int x[1000],j,i,c,count,n,a;
    while(scanf("%d",&n)!=EOF)
    {
        if(n>0 && n<=1000)



        {for(i=0;i<n;++i)
    scanf("%d",&x[i]);
    count=0;
    for(i=1;i<n;++i)
    {
         for(j=0;j<(n-1);++j)
       {if(x[j]>x[j+1])
        {
            ++count;
            c=x[j];
            x[j]=x[j+1];
            x[j+1]=c;
        }}
    }

    printf("Minimum exchange operations : %d\n",count);}

   }return 0;

}
