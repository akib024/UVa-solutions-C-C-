//Bismillah hir REahman nir Rahim
#include <bits/stdc++.h>

using namespace std;

int X[10+1];
int cont;
vector<int>v[100];


bool PLACE(int k, int n){
    for(int i = 1; i <= k-1; i++){
        if( (X[i] == X[k]) || (abs(i - k) == abs(X[i] - X[k]))){
            return false;
        }
    }
    return true;
}

void NQUEEN(int n){
    int k;
    cont = 0;

    k = 1;
    X[k] = 0;

    while(k > 0){
        X[k] = X[k] + 1;

        while(X[k] <= n && !PLACE(k, n)){
            X[k] = X[k] + 1;
        }

        if(X[k] <= n){

            if(k == n ){
                cont++;
                v[cont].push_back(0);
                for(int i = 1; i <=n; i++){
                    //cout << i << " " << X[i] << endl;
                    v[cont].push_back(X[i]);
                }
                //cout << endl;
            }
            else{
                k = k +1;
                X[k] = 0;
            }
        }
        else{
            //cout << "Yahoo" << endl;
            k = k - 1;
        }

    }
}

int main(){
    //freopen ("myfile.txt","w",stdout);
    unsigned t, x, y;
    cin >> t;

    int n = 8;
    NQUEEN(n);


    while(t--){
        cin >> y >> x;


        cout << "SOLN       COLUMN" << endl;
        cout << " #      1 2 3 4 5 6 7 8" << endl << endl;

        int a = 0;
        for(int i = 1; i <= 92; i++){

            if(v[i][x] == y){
                a++;
                if(a > 9){
                    cout << a << "     ";
                }
                else{
                    cout << " " << a << "     ";
                }
                for(int j = 1; j <=n; j++){
                    cout << " " << v[i][j] ;
                }
                cout << endl;
            }
        }
        if(t)
        cout << endl;

    }
    return 0;
}
