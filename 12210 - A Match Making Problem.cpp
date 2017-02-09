#include<stdio.h>
int main()
{
    int bach,spin,b[10001],s[10001],count=0,i,j,k,min;
    while(scanf("%d %d",&bach,&spin))
    {
        if(bach==0 && spin==0)break;
        ++count;
        min=61;
        for(i=0;i<bach;++i)
        {
            scanf("%d",&b[i]);
            if(b[i]<min)
            min=b[i];
        }
        for(i=0;i<spin;++i)
        scanf("%d",&s[i]);
        if(bach==spin || spin>bach)
        printf("Case %d: 0\n",count);
        else
        printf("Case %d: %d %d\n",count,bach-spin,min);
    }
    return 0;
}
