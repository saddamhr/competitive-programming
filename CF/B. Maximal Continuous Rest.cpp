#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, arr[400010], res = 0, testCase, mx, cnt, j;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        cnt = 0, mx = 0;
        scanf("%d", &arr[i]);
        arr[n + i] = arr[i];

    }
    for(j = 0; j < (n * 2); j++)
    {
        if(arr[j] == 1)
        {
            cnt++;
            mx = max(mx, cnt);
            res = mx;
        }
        else if(arr[j] == 0)
        {
            cnt = 0;
        }
    }

    printf("%d\n", mx);


    return 0;
}
