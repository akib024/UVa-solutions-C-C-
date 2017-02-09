#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,str[100],b=-2,r,i,t,k;
    cin >> t;
    for(k=1; k<=t; ++k)
    {
        cin >> n;
        i = 0;
        cout << "Case #" << k << ": ";
        if(n==0){cout << i << endl ; continue;}

        while(n != 0)
        {
            r = n % b;
            if(r < 0) r = r - b;
            str[i++] = r;
            n = (n - r) / b;
        }

        for(--i; i>=0; --i)
        cout << str[i];
        cout << endl;
    }
    return 0;
}
