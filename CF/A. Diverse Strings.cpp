#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    char str[110],l, tc, i;

    scanf("%d", &tc);

    while(tc--)
    {
        int f = 0;
        scanf("%s", str);
        l = strlen(str);

        sort(&str[0], &str[l]);

        for(i = 1;i < l;i++)
        {
            if(str[i] != str[i - 1] + 1)
            {
                f = 1;
                break;
            }
        }
        if(f == 1)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}
