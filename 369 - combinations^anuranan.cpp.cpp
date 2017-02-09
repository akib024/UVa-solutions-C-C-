#include<iostream>
#include<iomanip>

using namespace std;

long double N,M,i,fac;

long double  factorial(long double x){
    long double mul = 1;
    for(i = x; i>1; --i){
        mul = mul * i;
    }
    return mul;
}

main(){
    while(cin >> N >> M){
        if(N==0 && M==0)break;
        fac = factorial(N) / (factorial(N-M) * factorial(M));
        cout << N << " things taken " << M << " at a time is " << fixed << setprecision(0) << fac << " exactly." <<endl;
    }
    return 0;
}

/*
#include<iostream>
#include<cstdio>
#include<vector>
#include<iomanip>

using namespace std;

unsigned i,j,N,M;
vector<long double>v[101];
long double sum;
int main(){
    v[0].push_back(1);
    for(i=1; i<101; ++i){
        v[i].push_back(1);
        for(j=1; j<i; ++j){
            sum = v[i-1][j] + v[i-1][j-1];
            v[i].push_back(sum);
        }
        v[i].push_back(1);
    }
    while(cin >> N >> M){
        if(N==0 && M==0)break;
        cout << N << " things taken " << M << " at a time is ";
        cout << fixed << setprecision(0) << v[N][M] << " exactly." <<endl;
    }
    v[101].clear();
    return 0;
}
*/
