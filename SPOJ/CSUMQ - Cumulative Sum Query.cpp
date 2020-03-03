#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, arr[100010], sum[100010], q, i, j, s = 0, q1, q2, res;

    scanf("%lld", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        s = s + arr[i];
        sum[i] = s;
    }
    scanf("%lld", &q);
    for(j = 0; j < q; j++)
    {
        scanf("%lld %lld", &q1, &q2);
        if(q1 > q2)
        {
            swap(q1, q2);
            res = sum[q2] - sum[q1 - 1];
            printf("%lld\n", res);
        }
        else
        {
            if(q1 == 0)
            {
                printf("%lld\n", sum[q2]);
            }
            else
            {
                res = sum[q2] - sum[q1 - 1];
                printf("%lld\n", res);
            }
        }

        }

    return 0;
}
