//Bismillaahir Rahmaanir Raheem
#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

main( ){
    unsigned n, i, j;

    while((cin >> n) && n){

        unsigned v[n][n], r = 0, c = 0, remain_r, remain_c;

        for(i = 0; i<n; i++){
            for(j = 0; j<n; j++){
                cin >> v[i][j];
            }
        }

        for(i = 0; i<n; i++){
            unsigned sor = 0, soc = 0;
            for(j = 0; j<n; j++){
                sor = sor + v[i][j];
                soc = soc + v[j][i];
            }

            if(sor % 2){
                ++r;
                remain_r = i + 1;
                if(r > 1)break;
            }

            if(soc % 2){
                ++c;
                remain_c = i + 1;
                if(c > 1)break;
            }
        }

        if(r == 0 && c == 0)
            cout << "OK" << endl;

        else if(r == 1 && c == 1){
            printf("Change bit (%u,%u)\n", remain_r, remain_c);
        }

        else{
            cout << "Corrupt" << endl;
        }
    }
    return 0;
}
//Alhamdulillah
