/*Bismillaahir Rahmaanir Raheem*/
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int peg;
        cin >> peg;
        double ans = peg * peg;
        ans = ceil(ans / 2);
        ans = ans + peg - 1;
        cout << ans << endl;
    }
    return 0;
}
