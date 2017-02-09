#include<iostream>
#include<string.h>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<sstream>

using namespace std;

int main(){
    unsigned t,i,total = 0,x;
    cin >> t;
    string str1,str2 = "report";
    getchar();
    for(i=0; i<t; ++i){
        getline(cin,str1);
        if(str1 == str2)
        cout << total << endl;
        else{
            sscanf(str1.c_str(),"%*s %d",&x);
            total = total + x;
        }
    }
    return 0;
}
