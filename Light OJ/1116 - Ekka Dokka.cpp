#include <stdio.h>
#include <math.h>
#include <string.h>

#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>

using namespace std;

#define deb(a)    cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;
#define pb push_back
#define OO 2e9+10

typedef long long ll;

template<class T> T abs(T x)
{
    if(x<0)
        return -x;
    return x;
}
template<class T>T sqr(T a)
{
    return a*a;
}

const double pi = acos(-1.0);
const double eps = 1e-8;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output","w",stdout);

    int tc, cn = 1;
    ll n, m, res;

    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%lld", &n);
        m = n;
        res = 1;
        while(n % 2 == 0)
        {
            n /= 2;
            res *= 2;
        }
        if(res == 1)
            printf("Case %d: Impossible\n", cn++);
        else
            printf("Case %d: %lld %lld\n", cn++, n, res);
    }



    return 0;
}
