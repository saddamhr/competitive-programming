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

    int tc, cn = 1, n, m, ar[110], y, z, d, i, tmp, j, k,l, x;

    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%d%d", &n, &m);

        for(i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }
        for(i=0; i<m; i++)
        {
            char step[2];
            scanf("%s", step);
            if(step[0]=='S')
            {
                scanf("%d", &d);
                for(j=0; j<n; j++)
                    ar[j]+=d;
            }
            else if(step[0]=='M')
            {
                scanf("%d", &d);
                for(j=0; j<n; j++)
                    ar[j]*=d;
            }
            else if(step[0]=='D')
            {
                scanf("%d", &d);
                for(j=0; j<n; j++)
                    ar[j]/=d;
            }
            else if(step[0]=='R')
            {
                for(j=0,l=n-1; j<n/2; j++, l--)
                {
                    swap(ar[j], ar[l]);
//                    tmp = ar[j];
//                    ar[j] = ar[l];
//                    ar[l] = tmp;
                }
            }
            else if(step[0]=='P')
            {
                scanf("%d%d", &x, &y);
                swap(ar[x],ar[y]);
//                tmp = ar[x];
//                ar[x] = ar[y];
//                ar[y] = tmp;
            }
        }
        printf("Case %d:\n", cn++);
        for(i=0; i<n-1; i++)
            printf("%d ", ar[i]);
        printf("%d\n",ar[i]);
    }
    return 0;

}
