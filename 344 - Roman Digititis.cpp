//Bismillah hir Rahman nir Rahim
#include <bits/stdc++.h>

using namespace std;

int roman[100 + 1][5];

int main(){
    int input;

    for(int i = 1; i < 101; i++){
        int current = i;

        roman[i][4] = roman[i - 1][4];
        roman[i][3] = roman[i - 1][3];
        roman[i][2] = roman[i - 1][2];
        roman[i][1] = roman[i - 1][1];
        roman[i][0] = roman[i - 1][0];

        if(current / 100){
            roman[i][4]++;
            current = current % 100;
        }

        if(current / 90){
            roman[i][4]++;
            roman[i][2]++;
            current = current % 90;
        }

        if(current / 50){
            roman[i][3]++;
            current = current % 50;
        }

        if(current / 40){
            roman[i][3]++;
            roman[i][2]++;
            current = current % 40;
        }

        if(current / 10){
            roman[i][2] = (current / 10) + roman[i][2];
            current = current % 10;
        }

        if(current / 9){
            roman[i][2]++;
            roman[i][0]++;
            current = current % 9;
        }

        if(current / 5){
            roman[i][1]++;
            current = current % 5;
        }

        if(current / 4){
            roman[i][1]++;
            roman[i][0]++;
            current = current % 4;
        }

        if(current / 1){
            roman[i][0] = (current / 1) + roman[i][0];

        }
    }

    while( (cin >> input) && input){

            printf("%d: %d i, %d v, %d x, %d l, %d c\n",input, roman[input][0], roman[input][1], roman[input][2], roman[input][3], roman[input][4]);

    }
    return 0;
}
