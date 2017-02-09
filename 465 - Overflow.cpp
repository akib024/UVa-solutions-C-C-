/*Bismillaahir Rahmaanir Raheem*/
#include<iostream>
#include<string>
#include<cstdlib>
#include<cstdio>

using namespace std;

long double x, y;

int main(){
    char f[1000], m, l[1000];
    while(cin >> f){
        cin >> m >> l;

        x = strtold(f, NULL);
        y = strtold(l, NULL);

        cout << f << " " << m << " " << l << endl;

        //bool result = false;

        if(x > 2147483647){
            cout << "first number too big\n";
            //result = true;
        }

        if(y > 2147483647){
            cout << "second number too big\n";
            //result = true;
        }

        if(m == '+'){
            x = x + y;
            if(x > 2147483647)
                cout << "result too big\n";
        }

        if(m == '*'){
            x = x * y;
            if(x > 2147483647)
                cout << "result too big\n";
        }
    }
    return 0;
}
