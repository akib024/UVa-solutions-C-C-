#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>
#include<string>
#include<cstring>
#include<algorithm>

using namespace std;

queue< unsigned > q;

main(){
    unsigned cards, i;

    while(cin >> cards && cards){

        for(i = 1; i<=cards; i++)
            q.push(i);

        cout << "Discarded cards:" ;

        while(q.size() > 1){
            cout << " " << q.front();
            q.pop();
            q.push(q.front());
            q.pop();
            if(q.size() > 1) cout << ",";
        }

        cout << endl;

        cout << "Remaining card: " ;
        cout << q.front() ;
        cout << endl;

        q.pop();
    }

    return 0;

}
