#include<bits/stdc++.h>
using namespace std;
int arr[2000010];

int main()
{
    int n, i;

    while(1 == scanf("%d", &n))
    {
        if(n == 0)
            break;

        for(i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        sort(arr, arr + n);
        int t = 1;
        for(i = 0; i < n; i++)
        {
            if(t == 1)
            {
                printf("%d", arr[i]);
                t++;
            }
            else
                printf(" %d", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
