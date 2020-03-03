#include <bits/stdc++.h>
using namespace std;

#define OO 2e9+10

typedef long long ll;

template<class T> T abs(T x)
{
    if(x<0)
        return -x;
    return x;
}
template<class T>T sqr(T a)
{
    return a*a;
}

const double pi = acos(-1.0);


int main()
{
    int n, h[150], i, hig, a, caseNumber = 1;

    while(1==scanf("%d", &n))
    {
        if(n == 0)
        {
            break;
        }
        else
        {
            int sum = 0;
            for(i = 0; i<n; i++)
            {
                scanf("%d", &h[i]);
                sum = sum + h[i];

            }
            hig = sum / n;
            int mov = 0;
            //printf("%d\n", hig);
            for(i=0; i<n; i++)
            {
                if(hig < h[i])
                {
                    a = h[i] - hig;
                    mov = mov + a;
                }
            }
            printf("Set #%d\n",caseNumber++);
            printf("The minimum number of moves is %d.\n\n", mov);
        }

    }

    return 0;
}



