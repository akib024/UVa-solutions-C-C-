/*Bismillaahir Rahmaanir Raheem*/
#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main(){
    int n;

    while(cin >> n){
        int e = floor(log10(2)*n + 1);
        double head = pow(2, (e / log10(2) - n));
        //cout << head << " " << e << endl;
        printf("2^-%d = %.3lfe-%d\n", n, head, e);
    }
    return 0;
}
