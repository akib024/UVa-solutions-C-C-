/*Bismillahir Rahmaanir Raheem*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    unsigned t, even, total, i, j;
    string strng[4];

    cin >> t;

    while(t--){
        for(i = 0; i<4; i++)
            cin >> strng[i];

        total = 0;

        for(i = 0; i<4; i++){
            for(j = 0; j<4; j++){
                if(j%2 == 0){
                    int x = (strng[i][j] - '0') * 2;

                    if(x > 9){
                        x = x%10 + x/10;
                    }

                    total = total + x;
                }
                else{
                    int x = (strng[i][j] - '0');

                    total = total + x;
                }
            }
        }

        if(total%10 == 0)
            cout << "Valid" << endl;
        else
            cout << "Invalid" << endl;
    }
    return 0;
}
