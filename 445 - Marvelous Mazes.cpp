//Bismillahir Rahmaanir Raheem
#include<iostream>
#include<string>

using namespace std;

main(){
    string line;
    int cycle = 0;

    while(getline(cin, line)){
        for(int i = 0; i < line.size(); i++){

            if(line[i] >='0' && line[i] <= '9'){
                cycle = cycle + line[i] - '0';
                continue;
            }

            else if(line[i] == '!'){
                cout << endl;
            }

            else if(line[i] == 'b'){
                for(int j = 0; j < cycle; j++){
                    cout << " ";
                }
            }

            else{
                for(int j = 0; j < cycle; j++){
                    cout << line[i];
                }
            }

            cycle = 0;
        }
        cout << endl;
    }
    return 0;
}
