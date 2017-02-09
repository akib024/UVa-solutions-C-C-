#include<iostream>
using namespace std;

int main()
{
    unsigned S,i,j,total,t=1;
    unsigned goru[1001],cagol[1001];
    for(i = 1; i<1001; ++i)
    cagol[i] = 0;
    for(i = 1; i<1001; ++i)
    {
        if(i>1)total = 1 + i;
        else total = 1;
        for(j = 2; j<=(i/2); ++j)
        {
            if(i%j == 0)
            total = total + j;
            if(total>1000)break;
        }
        if(total>1000)continue;
        goru[total] = i;
        cagol[total] = 1;

    }

    while(cin >> S)
    {
        if(S==0)break;
        cout << "Case " << t++ << ": ";

        if(cagol[S])
        cout << goru[S] << endl;

        else
        cout << "-1" << endl;
    }
    return 0;
}
