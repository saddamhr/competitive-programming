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
    ll n, p, q, sum, i, x, cnt;

    scanf("%d", &tc);

    while(tc--)
    {
        sum = cnt = 0;
        scanf("%lld%lld%lld", &n, &p, &q);
        for(i=0;i<n;i++)
        {
            scanf("%lld", &x);
            sum+=x;

            if(sum<=q)
                cnt++;
        }
        if(p<=cnt)
            printf("Case %d: %lld\n", cn++, p);
        else
            printf("Case %d: %lld\n", cn++, cnt);
        //printf("Case %d: %lld\n", cn++, cnt);
        //printf("%lld\n", sum);
//        if(sum<=q)
//            printf("Case %d: %lld\n", cn++, p);
//        else
//            printf("Case %d: %lld\n", cn++, cnt);
    }
    return 0;

}
