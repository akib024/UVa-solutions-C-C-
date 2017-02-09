/*Bismillahir RAhmaanir Raheem*/
#include<iostream>
#include<map>
#include<string>
#include<cstdio>

using namespace std;

double fact[100] = {0};

double factorial(int x){
    if(x == 0)
        return 1;

    if(fact[x])
        return fact[x];
    else{
        fact[x] = x * factorial(x-1);
        return fact[x];
    }
}

int main(){
    map<char, int>m;

    for(char i = 'A'; i <= 'Z'; i++)
        m[i] = 0;

    int t;
    cin >> t;

    for(int x = 1; x <= t; x++){
        string S;
        cin >> S;
        int size = S.size();
        double ans = factorial(size);
        //cout << ans << endl;
        for(int j = 0; j<size; j++)
            ++m[S[j]];

        for(char i = 'A'; i <= 'Z'; i++){
            if(m[i] > 1){
                //cout << m[i] << endl;
                ans = ans / factorial(m[i]);

            }
            m[i] = 0;
        }

        printf("Data set %d: %.0lf\n",x,ans);

    }
    return 0;
}
