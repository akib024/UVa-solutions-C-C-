/*Bismillaahir Rahmaanir Raheem*/
#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    unsigned long long int input,testCase;



    scanf("%llu",&testCase);

    for(int i=1;i<=testCase;i++){
      scanf("%llu",&input);
      if(input==0){
        printf("10\n");
        continue;
      }
      if(input>=1&&input<=9){
        printf("%llu\n",input);
        continue;
      }
      vector<int> res;
      int flag;

      while(input>=10){
        flag = 1;
        for(int m=9;m>=2;m--){
         if(input%m==0){

           flag = 0;
           res.push_back(m);
           input /= m;

           break;
         }
        }
        if(flag==1)break;

      }

      if(flag==1)printf("-1\n");
      else {
        res.push_back(input);
        sort(res.begin(),res.end());
        for(int j=0;j<res.size();j++)printf("%d",res[j]);
        printf("\n");
      }

    }


    return 0;
}
