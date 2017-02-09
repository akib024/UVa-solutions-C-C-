#include <bits/stdc++.h>
using namespace std;

unsigned b0,b1,b2,g0,g1,g2,c0,c1,c2,Min,record;
char arr[] = {'B', 'C', 'G'};
vector<char>result, out_view;
int taken[20] = {0};

unsigned calculation()
{
    unsigned total = 0;
    for(int i = 0; i < 3; i++)
    {
        switch(result[i])
        {
        case 'B':
            switch(i)
            {
            case 0:
                total = total + b1 + b2;
                break;
            case 1:
                total = total + b0 + b2;
                break;
            case 2:
                total = total + b0 + b1;
                break;
            }
            break;

        case 'C':
            switch(i)
            {
            case 0:
                total = total + c1 + c2;
                break;
            case 1:
                total = total + c0 + c2;
                break;
            case 2:
                total = total + c0 + c1;
                break;
            }
            break;

        case 'G':
            switch(i)
            {
            case 0:
                total = total + g1 + g2;
                break;
            case 1:
                total = total + g0 + g2;
                break;
            case 2:
                total = total + g0 + g1;
                break;
            }
            break;
        }
    }

    return total;
}

void permutation()
{
    int total;

    if(result.size() == 3)
    {
        /*for(int i=0;i<3;i++)
            printf("%c",result[i]);*/

        total = calculation();

        //cout << " " << record << " " << total << endl;

        if(record)
        {
            Min = total;
            record = 0;
            out_view = result;
        }

        else if(total < Min)
        {
            Min = total;
            out_view = result;
        }
        //puts("");
        return;
    }

    for(int i = 0; i<3; i++)
    {
        if(taken[i] == 0)
        {
            taken[i] = 1; result.push_back(arr[i]);
            permutation();
            taken[i] = 0; result.pop_back();
        }
    }
}





main()
{

    while(scanf("%u%u%u%u%u%u%u%u%u",&b0,&g0,&c0,&b1,&g1,&c1,&b2,&g2,&c2)!=EOF)
    {
        record++;
        permutation();

        for(int i=0;i<3;i++)
            printf("%c",out_view[i]);

        printf(" %u\n",Min);
    }
    return 0;
}
