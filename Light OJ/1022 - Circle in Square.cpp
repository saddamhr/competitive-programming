#include <stdio.h>
#include <string.h>
#include <math.h>

#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>

using namespace std;

#define  pb push_back;

typedef long long ll;

template<class T> T abs(T x){
    if(x<0) return -x;
    return x;
}
template<class T>T sqr(T a){
    return a*a;
}

const double pi = 2 * acos(0.0);
//const double pi = 3.14159265358979323846;

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc, cn = 1;
    double r, res, s;

    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%lf", &r);
        //s = 2 * r;
        res = sqr(2 * r) - (pi * sqr(r));
        //printf("%lf\n", res);
        printf("Case %d: %.2lf\n", cn++, res);
    }

    return 0;
}
