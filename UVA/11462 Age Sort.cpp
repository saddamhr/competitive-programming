#include <bits/stdc++.h>
using namespace std;
int arr[2000010];

int main()
{
    int n, i, j, res, flag[110];

    while(1 == scanf("%d", &n))
    {
        if(n == 0)
            break;
        memset(flag, 0, sizeof flag);
        for(i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
            flag[arr[i]]++;

        }
        int t = 1;
        for(i=1; i<=100; i++)
        {
            for(j = 1;j <= flag[i];j++)
            {
                if(t == 1)
                {
                    printf("%d", i);
                    t++;
                }
                else
                    printf(" %d", i);

            }
        }
        printf("\n");
    }

    return 0;
}

