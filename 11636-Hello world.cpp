#include<stdio.h>
int main()
{
    int a,m,n,i,j;
    for(j=1;j<=2000;j++)
    {
        scanf("%d",&a);
        if(a<0)
            break;
        if(a>0 && a<10001)
        {
            m=1;
            if(a==1) printf("Case %d: 0\n",j);
            else
            {for(i=1;;i++)
            {
                n=m*2;
                if(a>m && a<=n)
                    break;
                else
                    m=n;
            }

            printf("Case %d: %d\n",j,i);}
        }
    }
  return 0;
}
