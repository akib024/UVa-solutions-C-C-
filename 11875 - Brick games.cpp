#include<stdio.h>
int main()
{
    int T,a,member,i,age[9],b,c,x,y;
    while(scanf("%d",&T)!=EOF){

        if(T>0 && T<101)

            {for(a=1;a<=T;++a)



                {scanf("%d",&member);
                if(member>1 && member<11 && (member%2)!=0)



                    {for(i=0;i<member;++i)
                    {
                        x=i;
                        scanf("%d",&age[i]);
                        if(age[i]<11 || age[i]>20)break;
                    }

                    for(i=0;(i+1)<member;++i)
                    {
                        y=i;
                        if(age[i]==age[i+1])break;
                    }



                 if(age[0]>age[1])
                {for(i=1;(i+1)<member;++i)
                {
                    b=i;
                    if(age[i]<=age[i+1])break;
                }printf("Case %d: %d\n",a,age[member/2]);
                    }
                else if(age[0]<age[1])
                {for(i=1;(i+1)<member;++i)
                {
                    c=i;
                    if(age[i]>=age[i+1])break;
                }printf("Case %d: %d\n",a,age[member/2]);
                }

                    }

            }

                }
   } return 0;
}
