/*Bismillaahir Rahmaanir Raheem*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    string s, t;
    while(cin >> s >> t){
        int x = 0;
        bool ok = false;
        for(int i = 0; i<t.size(); i++){

            if(s[x] == t[i]){
                ++x;
            }

            if(x == s.size()){
                ok = true;
                break;
            }
        }
        if(ok)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
