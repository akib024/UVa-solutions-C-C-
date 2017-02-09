#include <iostream>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
#include <map>
//#define MAX 1000000

using namespace std;
map< int,vector<int> > q1;

unsigned size;

int bsf(int source, int ttl ){

    int level = 0, uns = size - 1;

    vector< unsigned > q2, q3;
    q2.push_back(source);

    map<int, bool> taken;
    taken.clear();
    while(!q2.empty()){

        for(int j = 0; j<q2.size(); j++){
            if(level == ttl)break;
            int matha = q2[j]; //cout << "matha" << matha << endl;

                taken[source] = true;

                for(int i = 0; i<q1[matha].size(); i++){

                    int body = q1[matha][i];
                    if(!taken[body]){
                        //cout << "body" << body << endl;
                        taken[body] = true; --uns;
                        q3.push_back(body);
                    }
                }


        }
        level++;

        if(q3.empty())break;

        q2.clear();
        q2 = q3;
        q3.clear();

    }
    //cout << "uns" << uns << endl;

    return uns;
}

int main()
{
    unsigned edge, Case = 0, uns ;
    while((cin >> edge) && edge){
        //vector< unsigned > q1[MAX];
        q1.clear();
        int x, y;
        map<int, bool> Count;
        Count.clear();
        size = 0;
        for(int i = 0; i<edge; i++){

            cin >> x >> y;
            q1[x].push_back(y);
            q1[y].push_back(x);

            if(!Count[x]){
                Count[x] = true;
                ++size;
            }
            if(!Count[y]){
                Count[y] = true;
                ++size;
            }
        }

        int source, ttl;
        while((cin >> source >> ttl) && (source || ttl)){

            uns = bsf(source, ttl);
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++Case,  uns, source, ttl);

        }
    }
    return 0;
}
