#include<stdio.h>
#include<string.h>

int main()
{
    //freopen("in.txt","r",stdin);
    long long testCase, N, amount, sum, i, caseNumber = 1;
    char operations[100];

        sum = 0;
        scanf("%lld", &N);
        for(i = 0;i < N;i++)
        {
            scanf("%s", operations);
            //printf("%s\n", operations);
            if(strcmp(operations,"donate") == 0)
            {
                scanf("%lld", &amount);
                sum = sum + amount;
            }
            else if(strcmp(operations,"report") == 0)
            {
                printf("%lld\n", sum);
            }
        }
    return 0;
}
