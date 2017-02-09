#include<stdio.h>
int main()
{
    long int value,total,c;
    printf("PERFECTION OUTPUT\n");
    while(1)
    {
        scanf("%ld",&value);
        if(value==0)
        {printf("END OF OUTPUT\n");break;}
        else
        {
            for(c=1,total=0;c<=(value/2);++c)
            {
                if((value%c)==0)
                total+=c;
            }
            if(total==value)
            printf("%5ld  PERFECT\n",value);
            else if(total>value)
            printf("%5ld  ABUNDANT\n",value);
            else if(total<value)printf("%5ld  DEFICIENT\n",value);
        }
    }
    return 0;
}
