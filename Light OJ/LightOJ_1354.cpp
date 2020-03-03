#include<stdio.h>
#include<string.h>

int fun(int n)
{
    int bin[100];
    long long j = 0, i, rem, k, l, m, revarr[100], x = 0;
    double res;

    for(i = 0;n != 0 ; i++)
    {
        res = n / 2;
        rem = n - (2 * res);
        bin[i] = rem;
        n = res;

    }

    j = i;
    for(k = j - 1,l = 0;k >=0; k--,l++)
    {
        revarr[l] = bin[k];
    }
    for(m = 0;m < j;m++)
    {
        bin[m] = revarr[m];
    }
    for(i = 0 ;i < j;i++)
    {
        x = (x * 10) + bin[i];
    }

    return x;

}

int main()
{
    //freopen("in.txt","r",stdin);
    int num, da, db, dc, dd, ba, bb, bc, bd, x = 0, x1, x2, x3, x4;
    int n, j = 0, i, rem, bin[100], k, testCase, caseNumber = 1;
    char de, df, dg, be, bf, bg;
    double res;

    scanf("%d", &testCase);

    while(testCase--)
    {
        scanf("%d %c %d %c %d %c %d", &da, &de, &db, &df, &dc, &dg, &dd);
        scanf("%d %c %d %c %d %c %d", &ba, &be, &bb, &bf, &bc, &bg, &bd);

        x1 = fun(da);
        x2 = fun(db);
        x3 = fun(dc);
        x4 = fun(dd);

        if((x1 == ba) && (x2 == bb) && (x3 == bc) && (x4 == bd))
        {
            printf("Case %d: Yes\n", caseNumber++);
        }
        else
            printf("Case %d: No\n", caseNumber++);

    }
    return 0;
}

