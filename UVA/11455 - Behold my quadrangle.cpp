#include<stdio.h>

int main()
{
    //freopen("in.txt", "r", stdin);
    int testCase, a, b, c, d;

    scanf("%d", &testCase);

    while(testCase--)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if((a == b) && (a == c) && (a == d))
        {
            printf("square\n");
        }
        else if(((a == b) && (c == d)) || ((a == c) && (b == d)) || ((a == d) && (b == c)))
        {
            printf("rectangle\n");
        }
        else if((a+b+c > d)  && (a+c+d > b) && (b+c+d > a) && (a+b+d > c))
        {
            printf("quadrangle\n");

        }
        else
            printf("banana\n");
    }

    return 0;
}
