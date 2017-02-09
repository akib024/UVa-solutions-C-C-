#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstring>
#include<map>

using namespace std;

map< string, int  > m;
vector< string >v;
string desh,name;
int i,t;

int main(){

    cin >> t;
    getchar();
    for(i=0; i<t; ++i){
        cin >> desh;
        if(m[desh]==0)
        v.push_back(desh);
        m[ desh ] ++;
        getline(cin,name);
    }

    sort(v.begin(),v.end());

    for(i=0; i<v.size(); ++i){
        cout << v[i] << " " << m[v[i]] << endl;
    }

    v.clear();
    m.clear();
  return 0;
}

