#include<stdio.h>
int main()
{
    int t;
    long long int salary[3];
    scanf("%d",&t);
    if(t>0 && t<20)
    for(int no=1;no<=t;++no)
    {
        for(int count=0;count<3;++count)
        scanf("%lld",&salary[count]);
        if((salary[0]>=1000 && salary[0]<=10000) && (salary[1]>=1000 && salary[1]<=10000) && (salary[2]>=1000 && salary[2]<=10000))
        {
            if((salary[0]>salary[1] && salary[0]<salary[2]) || (salary[0]>salary[2] && salary[0]<salary[1]))
            printf("Case %d: %lld\n",no,salary[0]);
            else if((salary[1]>salary[0] && salary[1]<salary[2]) || (salary[1]>salary[2] && salary[1]<salary[0]))
            printf("Case %d: %lld\n",no,salary[1]);
            else
            printf("Case %d: %lld\n",no,salary[2]);
        }
    }
    return 0;
}

