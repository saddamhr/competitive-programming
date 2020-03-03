#include<stdio.h>

int main()
{
    //freopen("in.txt", "r", stdin);
    int testCase, a, b;

    scanf("%d", &testCase);

    while(testCase--)
    {
        scanf("%d %d", &a, &b);
        if(a < b)
            printf("<\n");
        else if(a > b)
            printf(">\n");
        else if(a == b)
            printf("=\n");
    }


    return 0;
}
