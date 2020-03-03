#include <bits/stdc++.h>
using namespace std;

#define OO 2e9+10

typedef long long ll;

template<class T> T abs(T x){
    if(x<0) return -x;
    return x;
}
template<class T>T sqr(T a){
    return a*a;
}

const double pi = acos(-1.0);


int main()
{
    ll a, b;

    while(2==scanf("%lld%lld",&a, &b))
    {
        if(a > b)
            printf("%lld\n", (a - b));
        else
            printf("%lld\n", (b - a));
    }

    return 0;
}
