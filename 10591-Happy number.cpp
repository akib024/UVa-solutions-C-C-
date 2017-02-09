#include<stdio.h>
int main()
{
    long long int inp,rem,count,i,num,total;
    scanf("%lld",&count);
    for(i=1;i<=count;++i)
    {
        scanf("%lld",&inp);
        num=inp;
        while(1)
        {
            total=0;
            while(num!=0)
            {
                rem=num%10;
                num=num/10;
                total=total + rem*rem;
            }
            num=total;
            if(total<10 && total==1){printf("Case #%lld: %lld is a Happy number.\n",i,inp);break;}
            else if(total<10 && total!=1){printf("Case #%lld: %lld is an Unhappy number.\n",i,inp);break;}
        }
    }
    return 0;
}
