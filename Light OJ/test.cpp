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
    //    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int tc, cn = 1, a, b, c, n, i, arr[110], mx, mxi, mn, mni;
    char str[110][110];

    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            scanf("%s%d%d%d",str[i], &a, &b, &c);
            arr[i] = a * b * c;
        }
        mx = mn = arr[0];
        mxi = mni = 0;

        for(i=1;i<n;i++)
        {
            if(mx < arr[i])
            {
                mx = arr[i];
                mxi = i;
            }
            if(mn > arr[i])
            {
                mn = arr[i];
                mni = i;
            }
        }
        if(mx == mn)
           printf("Case %d: no thief\n", cn++);
        else
           printf("Case %d: %s took chocolate from %s\n", cn++, str[mxi], str[mni]);



    }

    return 0;
}
