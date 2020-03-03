#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int testCase, length, arr[1000], i, j, temp, cnt;
    scanf("%d", &testCase);
    while(testCase--)
    {
        cnt = 0;

        scanf("%d", &length);

        for(i = 0; i < length; i++)
            scanf("%d", &arr[i]);

        for(i = 0; i < length; i++)
        {
            for(j = 0; j < length-i-1; j++)
            {
                if(arr[j] > arr[j+1])
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    cnt++;
                }

            }

        }
        printf("Optimal train swapping takes %d swaps.\n", cnt);

    }

    return 0;
}

