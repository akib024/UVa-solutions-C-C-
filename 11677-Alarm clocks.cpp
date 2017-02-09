#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,h,m,total;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2))
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)break;
        if(h2>h1)
        h = h2 - h1;
        else if(h1==h2 && m2>=m1)
        h = 0;
        else if(h1==h2 && m2<m1)
        h = 24;
        else
        h = 24 - (h1 - h2);
        if(m2>=1)
        m = m2 - m1;
        else
        {
            m = 60 - (m1 - m2);
            --h;
        }
        printf("%d\n",h*60 + m);
    }
    return 0;
}
