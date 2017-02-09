#include<iostream>
#include<cstdio>

using namespace std;

char fib[5001][1500];

int main()
{

    unsigned i,j,x;

    for(i=0; i<5001; ++i)
    for(j=0; j<1500; ++j)
    fib[i][j] = 0;

    fib[1][0] = 1;

    for(i=2; i<5001; ++i)
    for(j=0; j<1499; ++j)
    {
        fib[i][j] = fib[i][j] + fib[i-1][j] + fib[i-2][j];
        if(fib[i][j]>9)
        {
            fib[i][j] = (fib[i][j])%10;
            fib[i][j+1] = 1;
        }
    }
    while(scanf("%u",&x)!=EOF)
    {
        cout << "The Fibonacci number for " << x << " is " ;
        j = 0;
        for(i = 1499; i>0; --i)
        {
            if(fib[x][i]==0 && j==0)continue;
            else
            {
                printf("%u",fib[x][i]);
                j = 1;
            }
        }
        printf("%u\n",fib[x][0]);
    }
    return 0;
}

