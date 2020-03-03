#include <stdio.h>
#include <string.h>
#include <math.h>

#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

#define pb push_back;

typedef long long ll;

template <class T> T abs(T x){

    if(x<0) return -x;
    return x;
}

template <class T> T sqr(T a){

    return a * a;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("outpur.txt","w",stdout);

    int tc, cn = 1;
    ll n, rem, ar[100], cnt, i;
    double res;

    scanf("%d", &tc);

    while(tc--)
    {
        cnt = 0;
        scanf("%lld", &n);

        while(n != 0)
        {
            res = n / 2;
            rem = n - (2 * res);
            //printf("%lld ", rem);
            n = res;
            if(rem == 1)
                cnt++;
        }
        if(cnt % 2 == 0)
        {
            printf("Case %d: even\n",cn++);
        }
        else
        {
            printf("Case %d: odd\n", cn++);
        }
    }


    return 0;
}
