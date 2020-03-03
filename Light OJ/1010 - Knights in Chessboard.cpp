#include<stdio.h>

int main()
{
    int testCase, m, n, caseNumber = 1;

    scanf("%d", &testCase);

    while(testCase--)
    {
        scanf("%d %d", &m, &n);

        printf("Case %d: %d\n", caseNumber++, (n + (m - 1) * (m - 1)));


    }

    return 0;
}
