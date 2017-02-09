#include<stdio.h>
#include<string.h>
int main()
{
    char num1[26],num2[26];
    long int total1,total2,i,total,rem;
    double tot,tot1,tot2;
    while(gets(num1)&&gets(num2))
    {
        total1=0;total2=0;
        for(i=0;num1[i]!='\0';++i)
        {
            if(num1[i]>='A' && num1[i]<='Z')total1=total1+num1[i]-64;
            if(num1[i]>='a' && num1[i]<='z')total1=total1+num1[i]-96;
        }
        while(1)
        {
            total=0;
            while(total1!=0)
            {
                rem=total1%10;
                total1=total1/10;
                total=total + rem;
            }
            total1=total;
            if(total<10)break;
        }
        tot1=total1;
        for(i=0;num2[i]!='\0';++i)
        {if(num2[i]>='A' && num2[i]<='Z')total2=total2+num2[i]-64;
        if(num2[i]>='a' && num2[i]<='z')total2=total2+num2[i]-96;}

        while(1)
        {
            total=0;
            while(total2!=0)
            {
                rem=total2%10;
                total2=total2/10;
                total=total + rem;
            }
            total2=total;

            if(total2<10)break;
        }
        tot2=total2;
        if(tot1>tot2)
          tot=(tot2*100)/tot1;
        else if(tot1<tot2)
          tot=(tot1*100)/tot2;
        else tot=100.00;
          printf("%.2lf %c\n",tot,'%');
    }
    return 0;
}
