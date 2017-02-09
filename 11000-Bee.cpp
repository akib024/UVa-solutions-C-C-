#include<stdio.h>
int main()
{
    long long int firstNumber,secondNumber,i,temp,x,y[48];
    while(scanf("%lld",&x))
    {
        firstNumber=1,secondNumber=1,y[0]=0;
        if(x<0)break;
        for(i=1;i<=x;++i)
        {
            temp = secondNumber;
            secondNumber = secondNumber + firstNumber;
            firstNumber = temp;
            y[i] = secondNumber - 1;
        }--i;
        printf("%lld %lld\n", y[i], y[i] + 1 + y[i-1]);
    }
    return 0;
}
