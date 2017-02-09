#include<bits/stdc++.h>

using namespace std;

int BigMod(int B, int P, int M)
{
    if(P == 0)  return 1;

    if(P % 2 == 0)  return (BigMod(B, P/2, M) * BigMod(B, P/2, M)) % M;
    else    return (BigMod(B, P-1, M) * (B % M)) % M;
}

main()
{
    int B, P, M, R;

    while(scanf("%d",&B) != EOF)
    {
        scanf("%d %d", &P, &M);
        R = BigMod(B, P, M);

        printf("%d\n", R);
    }

    return 0;
}
