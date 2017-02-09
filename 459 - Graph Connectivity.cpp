/*Bismillaahir Rahmaanir Raheem*/
#include<iostream>
#include<cstring>
#include<string>
#include<map>
#include<vector>
#include<sstream>
#include<cstdlib>
#include<cstdio>

#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)


using namespace std;

//map<char, bool>visited;
map<char, bool>counted;
map<char, char>parents;

char find(char r){
    if(parents[r] == r)
        return r;
    else
        return parents[r] = find(parents[r]);
}

int main(){
    //read();
    //write();
    int t, sg;

    cin >> t;

    while(t--){
        char single, tail;
        string dbl;

        cin >> tail;

        //parents[single] = single;
        //visited[single] = true;

        cin.ignore();

        for(char i = 'A'; i <= tail;  i++)
            parents[i] = i;

        while(getline(cin, dbl)){
            if(dbl == "")break;

            char frst = dbl[0];
            char scnd = dbl[1];

            frst = find(frst);
            scnd = find(scnd);

            parents[scnd] = frst;
        }

        sg = 0;

        for(char i = 'A'; i <= tail; i++){
            single = find(i);
            if(!counted[single]){
                sg++;
                counted[single] = true;
            }
        }

        cout << sg << endl;
        if(t > 0) cout << endl;
        //visited.clear();
        counted.clear();
        parents.clear();
    }
    return 0;
}

