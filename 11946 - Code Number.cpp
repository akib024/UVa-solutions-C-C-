#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>

using namespace std;

int main(){
    string s[100];
    unsigned t,i,j,len,k,l;
    cin >> t;
    getchar();
    for(i=0; i<t; ++i){
        if(i>0)cout << endl;
        j = 0;
        while(getline(cin,s[j])){

            if(s[j].size())
            ++j;
            else break;
        }

        for(k=0; k<j; ++k){
            for(l=0; s[k][l]!='\0'; ++l){
                if(s[k][l]=='4') cout<<"A";
                else if(s[k][l]=='8')cout<<"B";
                else if(s[k][l]=='3')cout<<"E";
                else if(s[k][l]=='6')cout<<"G";
                else if(s[k][l]=='1')cout<<"I";
                else     if(s[k][l]=='0')cout<<"O";
                else     if(s[k][l]=='9')cout<<"P";
                else     if(s[k][l]=='5')cout<<"S";
                else     if(s[k][l]=='7')cout<<"T";
                else     if(s[k][l]=='2')cout<<"Z";
                else cout<<s[k][l];
            }
            cout << endl;
        }
    }
    return 0;
}
