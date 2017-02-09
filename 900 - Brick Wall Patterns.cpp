#include<stdio.h>
int main()
{
    long long fib[51],firstNumber=0,secondNumber=1,temp;
    unsigned i;
    for(i=1;i<=50;++i)
    {
        temp=secondNumber;
        secondNumber+=firstNumber;
        firstNumber=temp;
        fib[i] = secondNumber;
    }
    while(scanf("%u",&i))
    {
        if(i==0)break;
        printf("%llu\n",fib[i]);
    }
    return 0;
}

