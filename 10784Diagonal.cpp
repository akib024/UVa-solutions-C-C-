#include<stdio.h>
#include<math.h>
int main()
{
long long int inp,n,cas=1;
while(1)
{
    scanf("%lld",&inp);
    if(inp==0)break;
    n=(3+sqrt(9+8*inp))/2;
    if(((n*(n-1))/2 -n)<inp)printf("Case %lld: %lld\n",cas,n+1);
    else printf("Case %lld: %lld\n",cas,n);
    cas++;
}
return 0;
}
/*#include<stdio.h>
int main(){
long long int inp,count=1,dia,n,a,b;
while(1)
{
    scanf("%lld",&inp);
    if(inp==0)break;
    dia=0;
    for(n=1;;++n)
    {dia=n*(n-1)/2 - n;if(dia>=inp)break;}
    if(((n*(n-1))/2 -n)<inp)printf("Case %lld: %lld\n",cas,n+1);
    else printf("Case %lld: %lld\n",cas,n);
    ++count;
}return 0;}*/
