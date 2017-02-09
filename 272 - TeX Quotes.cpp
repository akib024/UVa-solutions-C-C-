//Bismillahir Rahmaanir Raheem
#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main(){
    string input;
    bool check = true;

    while(getline(cin, input)){

        for(unsigned i = 0; i < input.size(); i++){
            if(input[i] == '"'){
                if(check){
                    check = false;
                    printf("``");
                }
                else{
                    check = true;
                    printf("''");
                }
            }
            else{
                printf("%c",input[i]);
            }

        }
        printf("\n");
    }
    return 0;
}
