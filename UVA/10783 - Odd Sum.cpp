#include<stdio.h>

int main()
{
    int testCase, a, b, caseNumber = 1, i, c;

    scanf("%d", &testCase);

    while(testCase--)
    {
        int sum = 0;
        scanf("%d %d", &a, &b);

        while(a <= b)
        {
            c = a++;

            if((c % 2) != 0)
            {
                 sum = sum + c;
            }

        }
        printf("Case %d: %d\n", caseNumber++, sum);

    }

    return 0;
}
