//Bismillaahir Rahmaanir Raheem
#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    unsigned team, i, j, member,  element, k = 0;
    string command;

    while((cin >> team) && team){

        vector< unsigned >primary_team[team], final_team[team];
        vector< unsigned >check;

        for(i = 0; i<team; i++){

            cin >> member;

            while(member--){

                cin >> element;
                primary_team[i].push_back(element);
            }
        }

        cout << "Scenario #" << ++k << endl;

        while(cin >> command){
            if(command == "ENQUEUE"){

                cin >> member;
                //bool isPresent = (std::find(vec.begin(), vec.end(), target) != vec.end());
                for(i = 0; i<team; i++){
                    bool isPresent = find(primary_team[i].begin( ), primary_team[i].end( ), member) != primary_team[i].end( );
                    if(isPresent) break;
                }

                final_team[i].push_back(member);

                bool isPresent = find(check.begin( ), check.end( ), i) != check.end( );
                if(!isPresent)
                    check.push_back(i);
            }

            else if(command == "DEQUEUE"){
                while(true){
                    i = check.front( );
                    if(final_team[i].empty( )){
                        check.erase(check.begin( ));
                        continue;
                    }
                    else{
                        cout << final_team[i].front( ) << endl;
                        final_team[i].erase(final_team[i].begin( ));
                        break;
                    }
                }
            }

            else{
                cout << endl;
                break;
            }
        }
    }
    return 0;

}
