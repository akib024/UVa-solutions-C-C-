#include<stdio.h>
int main()
{
    unsigned men,inp,age[100],i,k,error;
    while(scanf("%u",&men))
    {
        if(men == 0)break;
        for(i = 1; i<100; ++i)
        age[i] = 0;
        for(i = 0; i<men; ++i)
        {
            scanf("%u",&inp);
            ++age[inp];
        }
        error = 0;
        for(i = 1; i<100; ++i)
        for(k = 0; k<age[i]; ++k)
        {
            if(error != 0)
            printf(" ");
            printf("%u",i);
            error = 1;
        }
        printf("\n");
    }
    return 0;
}

/*
#include<iostream>
#include<vector>
#include <algorithm>
#include<cstdio>

using namespace std;

int main(){
    unsigned n,a,i;
    vector<unsigned>age;
    while(scanf("%u",&n)){
        if(n){
            for(i=0; i<n; ++i){
                scanf("%u",&a);
                age.push_back(a);
            }
            sort(age.begin(),age.end());
            vector<unsigned>::iterator it;

            for ( it=age.begin() ; it < age.end(); it++ ){
                if(it!=age.begin())printf(" ");
                printf("%u",*it);
            }
            printf("\n");
            age.clear();
        }
        else break;
    }

    return 0;
}
*/
