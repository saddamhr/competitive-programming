#include <bits/stdc++.h>
using namespace std;

template<class T> T abs(T x){
    if(x<0) return -x;
    return x;
}

int n, odd[2010], even[2010], i, sum, cnt1, cnt2;

int main()
{
    while(1 == scanf("%d", &n))
    {
        cnt1 = cnt2 = sum = 0;
        int x;
        for(i = 0;i < n;i++)
        {
            scanf("%d", &x);
            if(x % 2 == 0)
            {
                even[cnt1++]= -x;
            }
            else
                odd[cnt2++] = -x;
        }

        sort(&even[0],&even[cnt1]);
        sort(&odd[0],&odd[cnt2]);

        if(cnt1 == cnt2 || cnt1 == cnt2+1 || cnt2 == cnt1+1)
        {
            printf("0\n");
            //continue;
        }
        else if(cnt1 < cnt2)
        {
            for(i = cnt1 + 1;i < cnt2;i++)
                sum = sum + odd[i];

            printf("%d\n", abs(sum));
        }

        else
        {
            for(i = cnt2 + 1;i < cnt1;i++)
                sum = sum + even[i];

            printf("%d\n", abs(sum));
        }
    }

    return 0;
}
