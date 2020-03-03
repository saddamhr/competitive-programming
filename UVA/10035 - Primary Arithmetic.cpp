#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    long long n, m, a, b, c, d, cry = 0, cnt, acry;

    while(2 == scanf("%lld %lld", &n, &m))
    {
        cnt = 0;
        acry = 0;
        if(n==0 && m == 0)
            break;

        while(n!=0 || m!=0)
        {
            a = n % 10;
            b = (n / 10);
            n = b;

            c = m % 10;
            d = (m / 10);
            m = d;

            cry = a + c + acry;

            if(cry >= 10)
            {
                cnt++;
                acry = 1;
            }
            else
                acry = 0;
        }
        if(cnt == 0)
            printf("No carry operation.\n");
        else if(cnt == 1)
            printf("%lld carry operation.\n", cnt);
        else
            printf("%lld carry operations.\n", cnt);


    }

    return 0;
}
