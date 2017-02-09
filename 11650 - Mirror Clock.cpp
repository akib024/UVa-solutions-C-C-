/*Bismillaahir Rahmaanir Raheem*/
#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main(){
    unsigned time;
    cin >> time;
    while(time--){
        int h,m;
        //string input;

        scanf("%d:%d", &h, &m);
        if(m && (m < 60)){
            m = 60 - m;
            h++;
        }

        if(h > 12)
            h = 1;

        h = 12 - h;

        if(!h)
            h = 12;

        printf("%02d:%02d\n",h,m);
    }
    return 0;
}
