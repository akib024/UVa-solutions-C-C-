
#include<stdio.h>

unsigned count[10],inp,t,i,reciever,j,x;

int main(){
    scanf("%u",&t);
    for(i = 0; i<t; ++i){
        scanf("%u",&inp);
        for(j = 0; j<10; ++j)
        count[j] = 0;
        for(j=1; j<=inp; ++j){
            reciever = j;
            while(reciever!=0){
            x = reciever % 10;
            ++count[x];
            reciever = reciever / 10;
            }
        }
        for(j = 0; j<10; ++j){
            if(j)printf(" ");
            printf("%u",count[j]);
        }
        printf("\n");
    }
    return 0;
}
