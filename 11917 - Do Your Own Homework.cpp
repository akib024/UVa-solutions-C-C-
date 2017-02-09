#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>

using namespace std;

unsigned t,n,i,j,D,x[1110];

bool kire;

int main(){
    string name[1110],due;
    cin >> t;
    for(i=1; i<=t; ++i){
        kire = false;
        cin >> n;
        for(j=0; j<n; ++j)
        cin >> name[j] >> x[j];
        cin >> D >> due;
        printf("Case %u: ",i);
        for(j=0; j<n; ++j){
            if(name[j]==due){
                kire = true;
                break;
            }
        }
        if(kire){
            if(x[j]<=D)cout << "Yesss" << endl;
            else if(x[j]<=D+5)cout << "Late" << endl;
            else cout << "Do your own homework!" << endl;
        }
        else
        cout << "Do your own homework!" << endl;
    }
    return 0;
}
/*
#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>

using namespace std;

unsigned t,n,i,j,D,k,x[1110],lend,lenh[1110];

main(){
    char name[1110][30],due[30];
    bool kire,ok;

    scanf("%u",&t);
    for(i=1; i<=t; ++i){
        kire = false;
        ok = true;
        scanf("%u",&n);
        for(j=0; j<n; ++j){
            scanf("%s %u",name[j],&x[j]);
        }
        scanf("%u %s",&D,due);
        printf("Case %u: ",i);

        for(j=0; j<n; ++j){
            if(strcmp(name[j],due)==0){
                kire = true;
                break;
            }
        }
        if(kire){
            if(x[j]<=D)cout << "Yesss" << endl;
            else if(x[j]<=D+5)cout << "Late" << endl;
            else cout << "Do your own homework!" << endl;
        }
        else
        cout << "Do your own homework!" << endl;
    }
    return 0;
}
*/
/*
#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>

using namespace std;

unsigned t,n,i,j,D,y;

bool kire;

int main(){
    vector <string> name;
    vector <int> x;
    string due;
    cin >> t;
    for(i=1; i<=t; ++i){
        kire = false;
        cin >> n;
        for(j=0; j<n; ++j){
            cin >> due >> y;
            name.push_back(due);
            x.push_back(y);
        }
        cin >> D >> due;
        printf("Case %u: ",i);
        for(j=0; j<n; ++j){
            if(name[j]==due){
                kire = true;
                break;
            }
        }
        if(kire){
            if(x[j]<=D)cout << "Yesss" << endl;
            else if(x[j]<=D+5)cout << "Late" << endl;
            else cout << "Do your own homework!" << endl;
        }
        else
        cout << "Do your own homework!" << endl;
        name.clear();
        x.clear();
    }
    return 0;
}

*/
