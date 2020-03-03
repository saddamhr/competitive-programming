#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    int n, arr[110], i, marr[100], sub, sum, a, lar;

    while(1 == scanf("%d", &n))
    {
        sub = sum = lar = 0;
        for(i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
            if(lar < arr[i])
            {
                lar = arr[i];
            }
        }
        for(i=0; i<n; i++)
        {
            sub = lar - arr[i];
            sum = sum + sub;
        }
        printf("%d\n", sum);

        //naim code
//        while(1 == scanf("%d", &n))
//        {
//            sum = lar = 0;
//            for(i=0; i<n; i++)
//            {
//                scanf("%d", &x);
//                lar = max(lar,x);
//                sum+=x;
//            }
//            printf("%d\n",(lar*n)-sum);
//        }
    }

    return 0;
}
