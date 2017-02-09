/*Bismillaahir Rahmaanir Raheem*/
#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

long total;

int main(){
    unsigned time, input, reserve, cost;
    priority_queue<int, vector<int>, greater<int> >mypq;

    while((cin >> time) && time){
        total = 0;
        for(unsigned i = 0; i<time; i++){
            cin >> input;
            mypq.push(input);
        }

        //sort(mypq.begin(), mypq.end());

        while(true){
            int first = mypq.top();
            mypq.pop();

            if(mypq.empty())
                break;

            int second = mypq.top();
            mypq.pop();

            mypq.push(first + second);

            total = total + first + second;
        }

        cout << total << endl;
    }
    return 0;
}
