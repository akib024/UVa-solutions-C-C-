#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>

using namespace std;

bool cmp(string a,string b)
{
    if(a.length()>b.length())
    return true;
    for(int x = 0; x<a.length(); ++x)
    {

        if(a[x]!=b[x])
        return true;
    }
    return false;
}
int main(){
    string inp;
    vector < string > v;
    unsigned t,n,i,j,len1,len2,k;

    cin >> t;
    for(i=0; i<t; ++i)
    {
        bool kire = true;
        cin >> n;
        for(j=0; j<n; ++j)
        {
            cin >> inp;
            v.push_back(inp);
        }
        sort(v.begin(),v.end());
        for(j=0; j<n-1; ++j)
        {
            kire = cmp(v[j],v[j+1]);
            if(kire)continue;
            else break;
        }
        if(kire)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
        v.clear();
    }
    return 0;
}
