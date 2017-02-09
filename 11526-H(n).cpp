#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    long long t,N,total,last,first,i;
    cin >> t;
    while(t--)
    {
        total = 0;
        cin >> N;
        first = N;
        for(i=1; i<=sqrt(N); ++i)
        {
            last = N/i;
            total = total + last;
            total = total + (first - last)*(i - 1);
            first = last;
        }
        if(first>sqrt(N))
        total = total + sqrt(N);
        cout << total << endl;
    }
    return 0;
}
