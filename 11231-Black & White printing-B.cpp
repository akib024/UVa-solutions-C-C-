#include<stdio.h>
int main()
{
    long int r,c,t,x;
    while(1)
    {
        scanf("%ld %ld %ld",&r,&c,&t);
        if(r==0 && c==0 && t==0)break;
        if(r%2==0 && c%2==0)
        {
            if(t==1)
            printf("%ld\n",((r-7)*(c-7)/2 + 1));
            else
            printf("%ld\n",(r-7)*(c-7)/2);
        }
        else printf("%ld\n",(r-7)*(c-7)/2);
    }
    return 0;
}
