#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<map>

using namespace std;


int main()
{
    int inp,reserve,time,num1,num2;
    char str1[20],str2[20];
    while(cin >> inp && inp)
    {
        map<int,bool>m;
        cout << "Original number was " << inp << endl;
        time = 0;
        ++time;
        sprintf(str1,"%d",inp);
        sort(str1,str1+strlen(str1));
        strcpy(str2,str1);
        reverse(str2,str2+strlen(str2));
        num1 = atoi(str2);
        num2 = atoi(str1);
        inp = num1 - num2;
        cout << num1 << " - " << num2 << " = " << inp << endl;
        while(!m[inp])
        {
            m[inp] = true;
            ++time;
            sprintf(str1,"%d",inp);
            sort(str1,str1+strlen(str1));
            strcpy(str2,str1);
            reverse(str2,str2+strlen(str2));
            num1 = atoi(str2);
            num2 = atoi(str1);
            inp = num1 - num2;
            cout << num1 << " - " << num2 << " = " << inp << endl;
        }
        cout << "Chain length " << time << endl << endl;
        printf("Chain length %d\n\n",time);
    }
    return 0;
}
