#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    unsigned nuk,len,i,t,k,bin,hex,use,mod;
    char num[5];
    scanf("%u",&t);
    getchar();
    for(k=0; k<t; ++k)
    {
        gets(num);
        use = 0; bin = 0; hex = 0;
        for(i=0; num[i]!='\0'; ++i)
        use = use*10 + num[i] - 48;
        len = strlen(num);
        while(use!=0)
        {
            mod = use%2;
            use = use/2;
            if(mod==1)++bin;
        }
        if(len==4)
        nuk = (num[0] - 48)*pow(16,3) + (num[1] - 48)*pow(16,2) + (num[2] - 48)*16 + num[3] - 48;
        else if(len==3)
        nuk = (num[0] - 48)*pow(16,2) + (num[1] - 48)*16 + num[2] - 48;
        else if(len==2)
        nuk = (num[0] - 48)*16 + num[1] - 48;
        else
        nuk = num[0] - 48;
        while(nuk!=0)
        {
            mod = nuk%2;
            nuk = nuk/2;
            if(mod==1)++hex;
        }
        printf("%u %u\n",bin,hex);
    }
    return 0;
}
