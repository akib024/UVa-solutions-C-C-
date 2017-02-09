#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char buet[100000];
    while(gets(buet))
    {
        for(i=0; buet[i]!='\0'; ++i)
        if(buet[i]>='A' && buet[i]<='Z')
        buet[i] = buet[i] + 32;
    for(i=0; buet[i]!='\0'; ++i)
    {
        switch(buet[i])
        {
            case '\\':printf(";");break;
            case ']':printf("p");break;
            case '[':printf("o");break;
            case 'p':printf("i");break;
            case 'o':printf("u");break;
            case 'i':printf("y");break;
            case 'u':printf("t");break;
            case 'y':printf("r");break;
            case 't':printf("e");break;
            case 'r':printf("w");break;
            case 'e':printf("q");break;
            case '\'':printf("l");break;
            case ';':printf("k");break;
            case 'l':printf("j");break;
            case 'k':printf("h");break;
            case 'j':printf("g");break;
            case 'h':printf("f");break;
            case 'g':printf("d");break;
            case 'f':printf("s");break;
            case 'd':printf("a");break;
            case 's':printf("]");break;
            case 'a':printf("[");break;
            case '/':printf(",");break;
            case '.':printf("m");break;
            case ',':printf("n");break;
            case 'm':printf("b");break;
            case 'n':printf("v");break;
            case 'b':printf("c");break;
            case 'v':printf("x");break;
            case 'c':printf("z");break;
            case 'x':printf("\\");break;
            case 'z':printf("'");break;
            case ' ':printf(" ");break;
        }
    }

    printf("\n");
    }
    return 0;


}

