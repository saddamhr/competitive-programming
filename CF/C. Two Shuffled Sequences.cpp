#include <bits/stdc++.h>
using namespace std;

long long n, arr[200010], flag[200010], i, j, f, dup[200010], dist[200010], l1, l2, cnt1, cnt2;

int main()
{
    freopen("input.txt","r",stdin);

    while(1 == scanf("%d", &n))
    {
        f = cnt1 = 0;
        cnt2 = 1;
        memset(flag,0,sizeof flag);
        for(i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
            //flag[arr[i]] = flag[arr[i]] + 1;
            flag[arr[i]]++;
            //printf("FLAG: %lld ", flag[arr[i]]);
            if(flag[arr[i]]>=3)
                f = 1;

        }
        if(f == 1)
            printf("NO\n");
        else
        {
            sort(&arr[0], &arr[n]);
            dist[0] = arr[0];
            for(i=1;i<n;i++)
            {
                if(arr[i] == arr[i-1])
                {
                    dup[cnt1++] = arr[i];
                    //printf("%lld %lld\n",cnt1, d[i]);
                }
                else
                {
                    dist[cnt2++] = arr[i];
                }
            }

            printf("YES\n");
            printf("%d\n", cnt1);
            for(i=0;i<cnt1;i++)
            {
                printf("%d ",dup[i]);
            }
            printf("\n");

            printf("%d\n", cnt2);
            for(i=cnt2 - 1;i>=0;i--)
            {
                printf("%d ",dist[i]);
            }
            printf("\n");
        }
    }

    return 0;
}
