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

    int b, k, res = 0, i;
    scanf("%d%d", &b, &k);
    for(i=0; i<k; i++)
    {
        int x;
        scanf("%d", &x);
        res = res * b + x;
        //printf("%d\n", res);
        res &= 1;
        //printf("%d\n", res);
    }
    if(res)
        printf("odd\n");
    else
        printf("even\n");
    return 0;
}
