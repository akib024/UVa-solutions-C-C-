/*Bismillaahir Rahmaanir Raheem*/
#include<iostream>
#include<string>
#include<stack>
#include<cstdio>

using namespace std;

int main(){
    unsigned kase, i;
    string bracket;

    cin >> kase;
    getchar();

    while(kase--){
        stack<char>par;
        getline(cin, bracket);
        bool ok = true;

        for(i = 0; i<bracket.length(); i++){
            if(bracket[i] == '(' || bracket[i] == '[')
                par.push(bracket[i]);
            else if(bracket[i] == ')'){
                if(par.empty()){
                    ok = false;
                    break;
                }
                else if(par.top() == '('){
                    par.pop();
                }
                else{
                    ok = false;
                    break;
                }
            }
            else if(bracket[i] == ']'){
                if(par.empty()){
                    ok = false;
                    break;
                }
                else if(par.top() == '['){
                    par.pop();
                }
                else{
                    ok = false;
                    break;
                }
            }
        }

        if(!par.empty())
            ok = false;

        if(ok)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    }
    return 0;
}
