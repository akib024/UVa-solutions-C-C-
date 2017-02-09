#include<iostream>
#include<string>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<sstream>
#include<ctype.h>

using namespace std;

int main(){
    char ch,last;
    while(scanf("%c",&ch)!=EOF)
    {
        if(isalpha(ch))
        {
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            {
                while(isalpha(ch))
                {
                    putchar(ch);
                    ch = getchar();
                }
                cout << "ay" ;
            }
            else
            {
                last = ch;
                ch = getchar();
                while(isalpha(ch))
                {
                    putchar(ch);
                    ch = getchar();
                }
                cout << last;
                cout << "ay" ;
            }
        }

        putchar(ch);
    }


    return 0;
}
