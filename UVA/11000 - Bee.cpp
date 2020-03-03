#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    long long n, m, f, newm = 0, newt = 0, i, t, r1, r2;

    while( 1 == scanf("%lld", &n) )
    {
        if( n == -1 )
            break;

        if(n == 0)
        {
            f = 1;
            m = 0;
            printf("%lld %lld\n", m, f + m);
        }
        else if(n == 1)
        {
            f = 1;
            m = 1;
            printf("%lld %lld\n", m, f + m);
        }
        else
        {
            f = 2;
            m = 2;
            for(i=2;i<=n;i++)
            {
                r1 = m;
                r2 = f + m;
                f = r1 + 1;
                m = r2;
            }
            printf("%lld %lld\n", r1, r2);
        }

    }

    return 0;
}
