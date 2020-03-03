#include<stdio.h>

int main()
{
    long long cnt, m, n, i, j, a, arr[100000], q, lar;

    while(2 == scanf("%lld %lld", &m, &n))
    {
        if(m < n)
        {
            lar = 0;
            for(i = m; i <= n; i++)
            {
                cnt = 0;
                a = i;
                while(a >= 1)
                {
                    cnt++;
                    if(a == 1)
                        break;
                    if(a % 2 == 0)
                        a = a / 2;
                    else
                        a = 3 * a + 1;

                }
                if(lar < cnt)
                    lar = cnt;


            }
            printf("%lld %lld %lld\n", m, n, lar);
        }

        else
        {
            lar = 0;
            for(i = n; i <= m; i++)
            {
                cnt = 0;
                a = i;
                while(a >= 1)
                {
                    cnt++;
                    if(a == 1)
                        break;
                    if(a % 2 == 0)
                        a = a / 2;
                    else
                        a = 3 * a + 1;

                }
                if(lar < cnt)
                    lar = cnt;
            }
            printf("%lld %lld %lld\n", m, n, lar);
        }





    }

    return 0;
}
