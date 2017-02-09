#include<stdio.h>
int main()
{
    unsigned t,i,pd,pm,py,bd,bm,by,year,month,day;
    char ob;
    scanf("%u",&t);
    for(i=1; i<=t; ++i)
    {
        scanf("%u %c %u %c %u",&pd,&ob,&pm,&ob,&py);
        scanf("%u %c %u %c %u",&bd,&ob,&bm,&ob,&by);
        if((by>py) || (by==py && bm>pm) || (by==py && bm==pm && bd>pd))
        printf("Case #%u: Invalid birth date\n",i);
        else if(py>by)
        {
            year = py - by - 1;
            month = 12 - bm + pm - 1;
            day = 30 - bd + pd;
            if(day>=30)++month;
            if(month>=12)++year;
            if(year>130)
            printf("Case #%u: Check birth date\n",i);
            else
            printf("Case #%u: %u\n",i,year);
        }
        else
        printf("Case #%u: 0\n",i);
    }
    return 0;
}
