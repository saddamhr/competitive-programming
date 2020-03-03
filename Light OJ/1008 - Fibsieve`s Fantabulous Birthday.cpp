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
    //freopen("output.txt","w",stdout);

    int tc, cn = 1;
    ll s, sq, mid, x;

    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%lld", &s);

        printf("Case %d: ", cn++);
        if(s == 1)
        {
            printf("1 1\n");
            continue;
        }

        sq = sqrt(s);

        if(sq * sq != s)    sq++;

        mid = ((sq * sq) + ((sq - 1) * (sq - 1) + 1)) / 2;

        if(sq % 2 == 0)
        {
            x = abs(mid - s);

            if(mid == s)    printf("%lld %lld\n", sq, sq);
            else if(mid > s)    printf("%lld %lld\n", sq - x, sq);
            else    printf("%lld %lld\n", sq, sq - x);
        }

        else
        {
            x = abs(mid - s);

            if(mid == s)    printf("%lld %lld\n", sq, sq);
            else if(mid < s)    printf("%lld %lld\n", sq - x, sq);
            else    printf("%lld %lld\n", sq, sq - x);
        }
    }
    return 0;

}
