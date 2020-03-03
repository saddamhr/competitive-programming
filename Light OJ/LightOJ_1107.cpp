#include<stdio.h>

int main()
{
    int testCase, x1, y1, x2, y2, numberOfCOw, cx, cy, i = 1;

    scanf("%d",&testCase);

    while(testCase--)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d",&numberOfCOw);
        printf("Case %d:\n", i);

        while(numberOfCOw--)
        {
            scanf("%d %d",&cx, &cy);
            if((x1 <= cx && x2 >= cx) && (y1 <= cy && y2 >= cy))
            {
                printf("Yes\n");
            }
            else
                printf("No\n");
        }
        i++;

    }

    return 0;
}
