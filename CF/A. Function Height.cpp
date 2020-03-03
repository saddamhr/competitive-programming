#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
    ll n, k;

    while(2 == scanf("%lld %lld", &n, &k))
    {
        if(k <= n)
            printf("1\n");
        else if(k % n == 0)
            printf("%lld\n", k / n);
        else
            printf("%lld\n", (k / n) + 1);
    }

    return 0;
}
