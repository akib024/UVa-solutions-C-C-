#include <bits/stdc++.h>
using namespace std;

unsigned height_max[10001];
//unsigned height_sec[20000];

main()
{
    unsigned l, h, r, i;
    unsigned l_min = 10000;
    unsigned r_max = 0;
	unsigned running_height = 0;
    //bool cord, jump;

    while(scanf("%u %u %u", &l, &h, &r) != EOF)
    {
        if(l < l_min)
        {
            l_min = l;
            //cout << endl << l_min << " ";
        }

        //cout << endl;
        if(r > r_max)
        {
            r_max = r;
            //cout << r_max << endl;
        }

        for(i = l; i < r; i++)
        {
            if(h > height_max[i])
            {
                height_max[i] = h;
            }
        }
    }

    //printf("%u %u ",l_min, height[l_min]);l_min++;

    for(i = l_min; i <= r_max; i++)
    {
		if(running_height != height_max[i])
		{
			printf("%u %u", i, height_max[i]);
			running_height = height_max[i];

			if(i < r_max)
            {
                printf(" ");
            }
            else
            {
                printf("\n");
            }
		}
    }

	//printf("%u %u\n", r_max, 0);

    return 0;
}
