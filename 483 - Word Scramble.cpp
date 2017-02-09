/*Bismillaahir Rahmaamir Raheem*/
#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    string x;
    vector<char>v;
    while(getline(cin, x)){
        ;
        //cin.ignore();

        for(int i = 0; i <= x.size(); i++){
            if(x[i] == ' ' || i == x.size()){
                reverse(v.begin(), v.end());
                for(int j = 0; j < v.size(); j++)
                    cout << v[j];

                v.clear();

                if(x[i] == ' ')
                    cout << " ";
            }
            else
                v.push_back(x[i]);
        }
        cout << endl;
    }
    return 0;
}
