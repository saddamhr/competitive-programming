#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    //freopen("input.txt","r",stdin);
    ll n, k, sum, i, res, f;

    while(2 == scanf("%lld %lld", &n, &k))
    {
        sum = res = 0;
        for(i=1; i<=n; i++)
        {
            sum = sum + 5;
            res = res + sum;
            if((240-k) <= res)
                break;
        }
        printf("%lld %lld\n", res, i);
        if(res == (240 - k))
            printf("%lld\n", i);
        else
            printf("%lld\n", i - 1);

    }

    return 0;
}
