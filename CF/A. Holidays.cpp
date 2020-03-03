#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen("input.txt","r",stdin);
    ll n,  a, b, mino, maxo;
    while(1 == scanf("%lld", &n))
    {
        a = n / 7;
        b = n % 7;
        //printf("%lld %lld\n", a, b);
        if(b >= 2)
            mino = (a * 2) + 2;
        else if(b >= 1)
            mino = (a * 2) + 1;
        else
            mino = a * 2;
        if(b > 5)
            maxo = (a * 2) + 1;
        else
            maxo = a * 2;
//        else if(b>=1 || b<5)
//        {
//            printf("%lld %lld\n", a * 2, (a * 2) + 1);
//        }
//
        printf("%lld %lld\n", maxo,  mino);
//        else if(n == 1)
//            printf("0 1\n");
//        else if(2>=n || n<=5)
//            printf("0 2\n");
//        else if(n % 7 == 0)
//            //printf("%lld\n", n / 2)
//            printf("%lld %lld\n", 2 * (n / 7), 2 * (n / 7));
//        //else
//            //printf(n)
    }
    return 0;
}
