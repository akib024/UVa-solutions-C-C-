#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<string>
using namespace std;


int main()
{
    map<char,char>store;
    string input;
    store['A'] = 'A';
    store['E'] = '3';
    store['H'] = 'H';
    store['I'] = 'I';
    store['J'] = 'L';
    store['L'] = 'J';
    store['M'] = 'M';
    store['O'] = 'O';
    store['S'] = '2';
    store['T'] = 'T';
    store['U'] = 'U';
    store['V'] = 'V';
    store['W'] = 'W';
    store['Y'] = 'Y';
    store['X'] = 'X';
    store['Z'] = '5';
    store['1'] = '1';
    store['2'] = 'S';
    store['3'] = 'E';
    store['5'] = 'Z';
    store['8'] = '8';

    unsigned i,j;
    while(getline(cin,input))
    {
        if(input.length()==0)continue;
        bool pelindrome = true;
        bool mirror = true;
        j = input.length() - 1;
        for(i=0; i<=input.length()/2; ++i, --j)
        {
            if(pelindrome)
            if(input[i] != input[j]) pelindrome = false;

            if(mirror)
            if(store[input[i]] != input[j]) mirror = false;

            if(mirror || pelindrome);
            else break;
        }


        if(mirror && pelindrome)
        cout << input << " -- is a mirrored palindrome." << endl << endl;
        else if(mirror)
        cout << input << " -- is a mirrored string." << endl << endl;
        else if(pelindrome)
        cout << input << " -- is a regular palindrome." << endl << endl;
        else
        cout << input << " -- is not a palindrome." << endl << endl ;
    }
    return 0;
}

/*#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<string>
using namespace std;


int main()
{

    string input;

    unsigned i,j;
    while(getline(cin,input))
    {
        if(input.length()==0)continue;
        bool pelindrome = true;
        bool mirror = true;
        j = input.length() - 1;
        for(i=0; i<=input.length()/2; ++i, --j)
        {
            if(pelindrome)
            if(input[i] != input[j]) pelindrome = false;

            if(mirror)
            {
                if(input[i]=='A' && input[j]=='A');
                else if(input[i]=='E' && input[j]=='3');
                else if(input[i]=='H' && input[j]=='H');
                else if(input[i]=='I' && input[j]=='I');
                else if(input[i]=='J' && input[j]=='L');
                else if(input[i]=='L' && input[j]=='J');
                else if(input[i]=='M' && input[j]=='M');
                else if(input[i]=='O' && input[j]=='O');
                else if(input[i]=='S' && input[j]=='2');
                else if(input[i]=='T' && input[j]=='T');
                else if(input[i]=='U' && input[j]=='U');
                else if(input[i]=='V' && input[j]=='V');
                else if(input[i]=='W' && input[j]=='W');
                else if(input[i]=='X' && input[j]=='X');
                else if(input[i]=='Y' && input[j]=='Y');
                else if(input[i]=='Z' && input[j]=='5');
                else if(input[i]=='1' && input[j]=='1');
                else if(input[i]=='2' && input[j]=='S');
                else if(input[i]=='3' && input[j]=='E');
                else if(input[i]=='5' && input[j]=='Z');
                else if(input[i]=='8' && input[j]=='8');
                else mirror = false;
            }

            if(mirror || pelindrome);
            else break;
        }


        if(mirror && pelindrome)
        cout << input << " -- is a mirrored palindrome." << endl << endl;
        else if(mirror)
        cout << input << " -- is a mirrored string." << endl << endl;
        else if(pelindrome)
        cout << input << " -- is a regular palindrome." << endl << endl;
        else
        cout << input << " -- is not a palindrome." << endl << endl ;
    }
    return 0;
}*/
