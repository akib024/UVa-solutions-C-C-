#include<stdio.h>
int main()
{
    long long int h,l,count,i,path,generator,j,max;
    while(scanf("%lld %lld",&l,&h))
    {
        path=0;
        if(l==0 && h==0)break;
        if(l>h)
        {
            max = l;
            l = h;
            h = max;
        }
        for(i=l; i<=h; ++i)
        {
            j=i;
            count = 0;
            do
            {
                if(j%2!=0)
                {
                    j = j*3 + 1;
                    ++count;
                }
                if(j%2==0)
                {
                    j = j/2;
                    ++count;
                }
            }while(j!=1);
            if(count>path)
            {
                path = count;
                generator = i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",l,h,generator,path);
    }
    return 0;
}
