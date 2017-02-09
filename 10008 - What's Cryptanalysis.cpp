#include<stdio.h>
int main()
{
    int t,i,j,let[26],dhor;
    char inp[999],yes[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ",pai;
    scanf("%d",&t);
    {
        getchar();
        for(i=0; i<26; ++i)
        let[i]=0;
        for(i=1; i<=t; ++i)
        {
            gets(inp);
            for(j=0; inp[j]!='\0'; ++j)
            switch(inp[j])
            {
                case 'a':
                case 'A':
                ++let[0];
                break;
                case 'b':
                case 'B':
                ++let[1];
                break;
                case 'c':
                case 'C':
                ++let[2];
                break;
                case 'd':
                case 'D':
                ++let[3];
                break;
                case 'e':
                case 'E':
                ++let[4];
                break;
                case 'f':
                case 'F':
                ++let[5];
                break;
                case 'g':
                case 'G':
                ++let[6];
                break;
                case 'h':
                case 'H':
                ++let[7];
                break;
                case 'i':
                case 'I':
                ++let[8];
                break;
                case 'j':
                case 'J':
                ++let[9];
                break;
                case 'k':
                case 'K':
                ++let[10];
                break;
                case 'l':
                case 'L':
                ++let[11];
                break;
                case 'm':
                case 'M':
                ++let[12];
                break;
                case 'n':
                case 'N':
                ++let[13];
                break;
                case 'o':
                case 'O':
                ++let[14];
                break;
                case 'p':
                case 'P':
                ++let[15];
                break;
                case 'q':
                case 'Q':
                ++let[16];
                break;
                case 'r':
                case 'R':
                ++let[17];
                break;
                case 's':
                case 'S':
                ++let[18];
                break;
                case 't':
                case 'T':
                ++let[19];
                break;
                case 'u':
                case 'U':
                ++let[20];
                break;
                case 'v':
                case 'V':
                ++let[21];
                break;
                case 'w':
                case 'W':
                ++let[22];
                break;
                case 'x':
                case 'X':
                ++let[23];
                break;
                case 'y':
                case 'Y':
                ++let[24];
                break;
                case 'z':
                case 'Z':
                ++let[25];
                break;
            }
        }
        for(i=0; i<25; ++i)
        for(j=0; j<25-i; ++j)
        {
            if(let[j+1]>let[j])
            {
                dhor = let[j+1];
                pai = yes[j+1];
                let[j+1] = let[j];
                yes[j+1] = yes[j];
                let[j] = dhor;
                yes[j] = pai;
            }
        }
        for(j=0; j<26; ++j)
        {
            if(let[j]>0)
            printf("%c %d\n",yes[j],let[j]);
        }
    }
    return 0;
}
