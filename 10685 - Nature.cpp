/*Bismillaahir Rahmaanir Raheem*/
#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>

using namespace std;

map<string, string>par;

string find(string r){
    if(par[r] == r)
        return r;
    else
        return par[r] = find(par[r]);
}

int main(){

    int animal, relation, i, max;
    string animal1, animal2;

    while((cin >> animal >> relation) && (animal || relation)){

        map<string, int>size;
        vector<string>check;

        for(i = 0; i<animal; i++){
            cin >> animal1;
            par[animal1] = animal1;
            size[animal1] = 0;
            check.push_back(animal1);
        }

        for(i = 0; i<relation; i++){
            cin >> animal1 >> animal2;

            animal1 = find(animal1);
            animal2 = find(animal2);

            par[animal2] = animal1;
        }

        max = 1;

        for(i = 0; i<animal; i++){

            animal1 = check[i];

            animal1 = find(animal1);

            size[animal1]++;

            if(size[animal1] > max)
                max = size[animal1];

        }

        cout << max << endl;
        par.clear();
    }
    return 0;
}





