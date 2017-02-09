#include<stdio.h>
int main()
{
    int count=0,inp=1,num;
    while(count!=1500)
    {
        num=inp;
        while(num%2==0)
        num=num/2;
        while(num%3==0)
        num=num/3;
        while(num%5==0)
        num=num/5;
        if(num==1)++count;
        ++inp;
    }
    printf("%d",inp-1);
    return 0;
}
