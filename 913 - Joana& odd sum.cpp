#include<stdio.h>
int main()
{

    long long int a,b,c[1],d;
    while(scanf("%lld",&d)!=EOF)
    {c[0]=1;if((d%2!=0) && d>1 && d<1000000000){
        for(a=1;a<=(d/2)+1;++a)


        for(b=1;b<(2*a );++b,c[0]=c[0]+2);

            c[0]=(c[0]-2)+(c[0]-4)+(c[0]-6);
            printf("%lld\n",c[0]);
    }
    }return 0;
}
