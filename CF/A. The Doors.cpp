#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int n, arr[200010], zero = 0, one = 0, i;

    while(1 == scanf("%d", &n))
    {
        for(i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);

            if(arr[i] == 0)
                zero = i;
            else if(arr[i] == 1)
                one = i;
        }

        printf("%d\n", min(zero,one) + 1);
//        if(zero < one)
//            printf("%d\n", zero + 1);
//        else
//            printf("%d\n", one + 1);
    }

    return 0;
}
