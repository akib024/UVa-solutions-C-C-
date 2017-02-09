//Bismillaahir Rahmaanir Raheem
#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>
#include<iomanip>

using namespace std;

int N;
vector<int>squares;

/*void prep(){
    for(int i = 0; i < 10000; i++)
        square.push_back(i * i);
}

int main(){
    prep();

    while(scanf("%d",&N) == 1){

        for(int i = 0; i<square.size(); i++){

            if(square[i] >= (int)pow(10, N)) break;

            if(pow(square[i]%(int)pow(10, N/2) + square[i]/(int)pow(10, N/2), 2) == square[i])
                cout << setw(N) << setfill('0') << square[i] << endl;
        }


    }

    return 0;
}*/



int prep() {
    for(int i = 0; i < 10000; i++)
        squares.push_back(i * i);
}

int main() {
    prep();
    while(scanf("%d", &N) == 1) {
        for(int i = 0; i < squares.size(); i++) {
            if(squares[i] >= (int) pow(10, N)) break;
            if(pow(squares[i] % (int) pow(10, N / 2) + squares[i] / (int) pow(10, N / 2), 2) == squares[i]) \
                cout << setw(N) << setfill('0') << squares[i] << endl;
        }
    }
}
