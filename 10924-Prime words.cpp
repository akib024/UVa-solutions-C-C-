    #include<stdio.h>
    int main()
    {
        char inp[30];
        int x,i,a,y;
        while(gets(inp))
        {
            x=0;
            for(i=0;inp[i]!='\0';++i)
            {
                if(inp[i]>=65 && inp[i]<=90)
                x = x + inp[i] - 38;
                else
                x = x + inp[i] - 96;
            }a=0;y=1;

            for(i=2;i<=(x/2);++i)
            {
                y=x%i;
                if(y==0)break;
            }
            if(y==0)
            printf("It is not a prime word.\n");
            else
            printf("It is a prime word.\n");
        }
        return 0;
    }
