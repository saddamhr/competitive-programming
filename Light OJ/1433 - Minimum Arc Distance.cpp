#include<stdio.h>
#include<math.h>

int main()
{
    int testCase, caseNumber = 1;
    double Ax, Ay, Bx, By, Cx, Cy, a, b, c, A, pi, arcd;

    scanf("%d", &testCase);

    while(testCase--)
    {
        scanf("%lf %lf %lf %lf %lf %lf", &Ax, &Ay, &Bx, &By, &Cx, &Cy);
        a = sqrt(pow(Cx - Bx, 2) + pow(Cy - By, 2));
        b = sqrt(pow(Cx - Ax, 2) + pow(Cy - Ay, 2));
        c = sqrt(pow(Bx - Ax, 2) + pow(By - Ay, 2));

        A = acos(((b * b) + (c * c) - (a * a)) / (2 * b * c));

        pi = acos(-1.0);

        arcd = ((2 * pi * b) / (2 * pi)) * A;

        printf("Case %d: %lf\n", caseNumber++, arcd);
    }


    return 0;
}
