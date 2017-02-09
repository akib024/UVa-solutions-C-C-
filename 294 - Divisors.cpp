#include <stdio.h>
#include <math.h>
int main()
{
    unsigned lower,upper,hold,test,i,j,k,divisor,max,req;
    scanf("%u",&test);
    for(i=0;i<test;i++){

     scanf("%u %u",&lower,&upper);
     max=0;
     for(j=lower;j<=upper;j++){
         divisor=0;
       for(k=1;k<=sqrt(j);k++){
         if(j%k==0){
            divisor++;
         if(j/k==k){


         }
         else divisor++;
         }

       }
       if(max<divisor){
        max=divisor;
        req=j;
       }


     }

    printf("Between %u and %u, %u has a maximum of %u divisors.\n",lower,upper,req,max);

    }



    return 0;
}
