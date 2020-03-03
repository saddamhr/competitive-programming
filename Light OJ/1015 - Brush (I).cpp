#include <stdio.h>
#include <string.h>
#include <math.h>

#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>

using namespace std;

typedef long long ll;

template<class T> T abs(T x){
    if(x<0) return -x;
    return x;
}
template<class T>T sqr(T a){
    return a*a;
}

const double pi = acos(-1.0);
const double eps = 1e-8;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n, ar[1010], sum, i;
    int tc, cn = 1;

    scanf("%d", &tc);
    while(tc--)
    {
        sum = 0;
        scanf("%lld", &n);
        for(i=0;i<n;i++)
        {
            scanf("%lld", &ar[i]);
            if(ar[i] >= 0)
                sum = sum + ar[i];
        }
        printf("Case %d: %lld\n", cn++, sum);
    }

    return 0;
}
