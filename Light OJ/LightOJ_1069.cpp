#include<stdio.h>
#include<stdlib.h>

int main()
{
    int tc, mePos, liftPos, totalTime, i = 1;

    scanf("%d",&tc);

    while(tc--)
    {
        scanf("%d %d", &mePos, &liftPos);

        totalTime = abs(liftPos - mePos) * 4 + 3 + 5 + 3 + mePos * 4 + 5 + 3;
        printf("Case %d: %d\n",i, totalTime);


        i++;

    }


    return 0;
}
