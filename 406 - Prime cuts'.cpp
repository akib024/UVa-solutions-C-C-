#include<stdio.h>
#include<math.h>
int isprime(int s)
{
    int i;
    if(s==1 || s==2)
        return 1;
    if(s%2==0)
        return 0;
    for(i=3;i<=sqrt(s);i++)
        if(s%i==0)
            return 0;
    return 1;
}
int main()
{
    int n,c,len,i,show,prime[500],j,k;
    while(scanf("%d %d",&n,&c)!=EOF)
    {
        len=0;
        printf("%d %d:",n,c);
        for(i=1;i<=n;i++)
        {
            if(isprime(i))
                prime[len++]=i;
        }
            if(len%2==0)
            {
                show = 2*c;
                if(show>=len-1)
                for(i=0; i<len; ++i)
                printf(" %d",prime[i]);
                else{
                for(i = (len/2) - c; i<(len/2) + c ; ++i)
                printf(" %d",prime[i]);}
            }
            else
            {
                show = 2*c - 1;
                j = len/2 + 1 - c;
                k =  len/2 + c;
                if(show>=len-1)
                for(i=0; i<len; ++i)
                printf(" %d",prime[i]);
                else{
                for(i = j; i<k; ++i)
                printf(" %d",prime[i]);}
            }
            printf("\n\n");
        }
    return 0;
}
