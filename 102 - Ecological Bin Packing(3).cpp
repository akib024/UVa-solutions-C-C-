#include <bits/stdc++.h>
using namespace std;

unsigned b0,b1,b2,g0,g1,g2,c0,c1,c2;
bool record;
char arr[] = {'B','C','G'};
char ans[3];

/*vector<char>arr, out_view;
int taken[20] = {0};*/

unsigned calculation()
{
    unsigned total = 0;
    for(int i = 0; i < 3; i++)
    {
        switch(arr[i])
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

/*
void permutation()
{
    int total;

    if(arr.size() == 3)
    {
        /*for(int i=0;i<3;i++)
            printf("%c",arr[i]);

        total = calculation();

        //cout << " " << record << " " << total << endl;

        if(record)
        {
            Min = total;
            record = 0;
            out_view = arr;
        }

        else if(total < Min)
        {
            Min = total;
            out_view = arr;
        }
        //puts("");
        return;
    }

    for(int i = 0; i<3; i++)
    {
        if(taken[i] == 0)
        {
            taken[i] = 1; arr.push_back(arr[i]);
            permutation();
            taken[i] = 0; arr.pop_back();
        }
    }
}
*/





main()
{
    unsigned total, Min;
    /*ofstream myfile;
    myfile.open ("example.txt");*/
    while(scanf("%u%u%u%u%u%u%u%u%u",&b0,&g0,&c0,&b1,&g1,&c1,&b2,&g2,&c2)!=EOF)
    {
        record = false;
        //permutation();
        //sort(arr, arr + 3);
        do{
            total = calculation();

            if(!record)
            {
                Min = total;
                memcpy(ans, arr, sizeof ans);
                record = true;
            //copy(std::begin(src), std::end(src), std::begin(dest));
            }
            else if(total < Min)
            {
                Min = total;
                memcpy(ans, arr, sizeof ans);
            }

        }while(next_permutation(arr, arr + 3));

        for(int i=0;i<3;i++){
            //myfile << ans[i];
            printf("%c",ans[i]);
        }

        //myfile << " " << Min << endl;

        printf(" %u\n",Min);
    }
    //myfile.close();
    return 0;
}
