/*Bismillaahir Rahmaanir Raheem*/
#include<iostream>
#include<map>
#include<vector>
#include<string>

using namespace std;

map<string, string>parents;
map<string, bool>visited;
map<string, int>size;

string find(string r){
    if(parents[r] == r)
        return r;
    else
        return parents[r] = find(parents[r]);
}

int main(){
    int t, kase;
    string x, y;

    cin >> t;

    while(t--){
        cin >> kase;

        while(kase--){
            int index;
            cin >> x >> y;

            if(!visited[x] && !visited[y]){
                visited[x] = true;
                visited[y] = true;

                parents[y] = x;
                parents[x] = x;

                index = size[x] = 2;
            }
            else if(visited[x] && visited[y]){
                x = find(x);
                y = find(y);

                if(x != y){
                    parents[y] = x;
                    index = size[x] = size[x] + size[y];
                }
                else
                    index = size[x] = size[y];
            }
            else if(!visited[x] && visited[y]){
                parents[x] = y = find(y);

                visited[x] = true;

                index = ++size[y];
            }
            else if(!visited[y] && visited[x]){
                parents[y] = x = find(x);

                visited[y] = true;

                index = ++size[x];
            }

            cout << index << endl;
        }

        parents.clear();
        visited.clear();
        size.clear();
    }
    return 0;
}
