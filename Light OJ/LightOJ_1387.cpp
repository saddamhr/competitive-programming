#include<stdio.h>

int main()
{
    long long testCase, N, amount, sum = 0;
    char operations[10];

    scanf("%lld", &testCase);

    while(testCase--)
    {
        scanf("%lld", &N);
        for(i = 0;i < N;i++)
        {
            scanf("%s", &operations);
            if(operations == "donate")
            {
                scanf("%lld", &amount);
                sum = sum + amount;
            }
            else if(operations == "report")
        }
    }

    return 0;
}
