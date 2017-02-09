#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;

unsigned i,t,j;
string number,x,y;
vector< string > v;
int main()
{
    while(scanf("%u",&t) && t)
    {
        getchar();
        for(i=0; i<t; ++i)
        {
            cin >> number;
            v.push_back(number);
        }
        for(i=0; i<t; ++i)
        for(j=0; j<t-i; ++j)
        {
            if(j)
            {
                x = v[j-1] + v[j];
                y = v[j] + v[j-1];
                if(y>x)
                {
                    number = v[j];
                    v[j] = v[j-1];
                    v[j-1] = number;
                }
            }
        }
        //sort(v.begin(),v.end());
        //reverse(v.begin(),v.end());
        for(i=0; i<t; ++i)
        cout << v[i];
        cout << endl;
        v.clear();
    }
    return 0;
}
