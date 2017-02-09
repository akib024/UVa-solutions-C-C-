#include<stdio.h>
int main()
{
    unsigned int aks,cu;
    while(scanf("%u",&aks))
    {
        if(aks == 0)break;
        while(aks>9 )
        {
            cu = 0;
            while(aks!=0)
            {
                cu = cu + aks%10;
                aks = aks/10;
            }
            aks = cu;
        }
        printf("%u\n",aks);
    }
    return 0;
}
