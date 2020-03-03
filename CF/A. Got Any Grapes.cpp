#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen("input.txt","r",stdin);
    ll x, y, z, a, b, c, gren, ppl, blc;

    while(6 == scanf("%lld %lld %lld %lld %lld %lld", &x, &y, &z, &a, &b, &c))
    {
        x -= 1, y -= 1, z -=1, a -= 1, b -= 1, c -= 1;
        //printf("%lld %lld %lld %lld %lld %lld\n", x, y, z, a, b, c);
        gren = a - x;
        ppl = (gren + b) - y;
        blc = (ppl + c) - z;

        if(gren >= 0 && ppl >= 0 && blc >=0)
            printf("YES\n");
        else
            printf("NO\n");
        //printf("%lld %lld %lld\n", gren, ppl, blc);


    }

    return 0;
}
