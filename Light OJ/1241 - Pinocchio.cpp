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
//      freopen("input.txt","r",stdin);
//      freopen("output.txt","w",stdout);

    int tc, n, x, y, cnt1, cnt2, i, dis, cn = 1;

    scanf("%d", &tc);

    while(tc--)
    {
        cnt1 = cnt2 = 0;
        scanf("%d", &n);
        x = 2;
        for(i=0; i<n; i++)
        {
            scanf("%d", &y);

            dis =(y - x);

            if(dis % 5 == 0)  cnt1 += (dis/5);
            else    cnt2 += (dis/5) + 1;

            x = y;
        }
        printf("Case %d: %d\n", cn++, cnt1 + cnt2);

    }

    return 0;
}
