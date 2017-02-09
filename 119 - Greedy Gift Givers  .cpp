/*Bismillaahir Rahmaanir Raheem*/
#include<iostream>
#include<map>
#include<cstdio>
#include<string>

using namespace std;

map<string, int>recieve;
map<string, int>contribute;
map<int, string>index;

int main(){
    unsigned member, i, money, cadger, real_mn;
    string name;
    bool is_first = false;

    while(scanf("%u",&member)!=EOF){
        for(i = 0; i<member; i++){
            cin >> name;
            recieve[name] = 0;
            contribute[name] = 0;
            index[i] = name;
        }

        for(i = 0; i<member; i++){
            cin >> name >> money >> cadger;

            if(cadger){
                real_mn = money / cadger;
                contribute[name] = real_mn * cadger;
            }

            while(cadger--){
                cin >> name;
                recieve[name] = recieve[name] + real_mn;
            }
        }

        if(is_first){
            cout << endl;
        }
        else{
            is_first = true;
        }

        for(i = 0; i<member; i++){
            name = index[i];

            cout << name << " " << recieve[name] - contribute[name] << endl;
        }
    }
    return 0;
}
