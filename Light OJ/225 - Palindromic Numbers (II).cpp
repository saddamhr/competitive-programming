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
    ll n, div, a, ar1[1000], ar2[1000], cnt, i, j, f;

    scanf("%d", &tc);

    while(tc--)
    {
        cnt = f = 0;
        scanf("%lld", &n);
        while(n)
        {
            a = n % 10;
            ar1[cnt] = ar2[cnt] = a;
            cnt++;
            //printf("%lld\n", a);
            n /= 10;
        }
        for(i=0,j = cnt - 1; i<cnt/2; i++, j--)
        {
            swap(ar1[i], ar1[j]);
            //printf("%lld\n", ar1[i]);
        }
//        for(i=0;i<cnt;i++)
//            printf("%lld ", ar1[i]);
//        printf("\n\n");
//        for(i=0;i<cnt;i++)
//            printf("%lld ", ar2[i]);

        //printf("A1: %lld A2: %lld\n", ar1[i], ar2[i]);
        for(i=0;i<cnt;i++)
        {
            if(ar1[i] != ar2[i])
                f = 1;
        }
        if(f == 1)
            printf("Case %d: No\n", cn++);
        else
            printf("Case %d: Yes\n", cn++);



    }
    return 0;

}

