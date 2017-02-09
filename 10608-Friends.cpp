/*Bismillaahir Rahmaanir Raheem*/
/*Bismillaahir Rahmaanir Raheem*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int>par;

int find(int r){
    if(par[r] == r)
        return r;
    else
        return par[r] = find(par[r]);
}

int main(){

    int time, n, m, i, a, b, max;
    cin >> time;

    while(time--){
        cin >> n >> m;

        max = 1;

        vector<int>count(n + 1, 0);
        for(i = 0; i<=n; i++){
            par.push_back(i);
            //count.push_back(0);
        }

        for(i = 0; i<m; i++){
            cin >> a >> b;

            a = find(a);
            b = find(b);

            par[b] = a;
        }

        for(i = 1; i<=n; i++){
            count[find(i)]++;
            if(count[par[i]] > max)
                max = count[par[i]];

        }

        cout << max << endl;
        par.clear();
    }
    return 0;
}




