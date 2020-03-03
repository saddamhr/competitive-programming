#include<stdio.h>

int main()
{
    long long testCase, n, m, caseNumber = 1;

    scanf("%lld", &testCase);

    while(testCase--)
    {
        scanf("%lld %lld",&n, &m);
        printf("Case %lld: %lld\n", caseNumber++, ((n / 2) * m));
    }

    return 0;
}
