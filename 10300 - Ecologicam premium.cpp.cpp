#include<stdio.h>
int main()
{
    int n,f,a,b,c,x,y,z,total;
    while(scanf("%d",&n)!=EOF)
    {
        if(n>0 && n<20)
        {
            for(x=1;x<=n;++x)
            {
                scanf("%d",&f);
                if(f>0 && f<20)
                {
                    total=0;
                    for(y=1;y<=f;++y)
                    {
                        scanf("%d %d %d",&a,&b,&c);
                        if((a>0 && a<100001) && (b>0 && b<100001) && (c>0 && c<100001))
                        total=total+a*c;
                    }

                    printf("%d\n",total);

                }

        }
    }
}return 0;
}
