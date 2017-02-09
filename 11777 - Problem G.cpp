#include<stdio.h>
int main()
{
    int T,t1,t2,f,a,ct1,ct2,ct3,av,count;
    scanf("%d",&T);
    if(T>0 && T<100)
    {
        for(count=1;count<=T;++count)
        {
            scanf("%d %d %d %d %d %d %d",&t1,&t2,&f,&a,&ct1,&ct2,&ct3);
            if((t1>=0 && t1<=20) && (t2>=0 && t2<=20) && (f>=0 && f<=30) && (a>=0 && a<=10) && (ct1>=0 && ct1<=20) && (ct2>=0 && ct2<=20) && (ct3>=0 && ct3<=20))
            {
                if((ct1>=ct3) && (ct2>=ct3))
                av=(ct1+ct2)/2;
                if((ct1>=ct2) && (ct3>=ct2))
                av=(ct1+ct3)/2;
                if((ct3>=ct1) && (ct2>=ct1))
                av=(ct3+ct2)/2;
            }
            av=av+t1+t2+f+a;
            if(av>=90)
            printf("Case %d: A\n",count);
            else if(av>=80)
            printf("Case %d: B\n",count);
            else if(av>=70)
            printf("Case %d: C\n",count);
            else if(av>=60)
            printf("Case %d: D\n",count);
            else
            printf("Case %d: F\n",count);
        }
    }
    return 0;
}
