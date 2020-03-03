#include <bits/stdc++.h>
using namespace std;

char str[110], str1[110], str2[110], str3[110];
int tc, cn = 1, i, ind, cnt, l, c1, c2;

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    scanf("%d", &tc);
    while(tc--)
    {
        c1 = c2 = 0;
        scanf("%s", str);
        l = strlen(str);

        for(i=0; i<l; i++)
        {
            if(str[i] == '4')
            {
                str1[i] = '3';
            }
            else
            {
                str1[i] = str[i];
            }
            //printf("%c ", str1[i]);
        }
        str1[i] = '\0';

        cnt = 0;
        for(i=0; i<l; i++)
        {
            if(str[i] == '4')
            {
                str2[i] = '1';
            }
            else
            {
                if(str[i] == '0')
                {

                }
                if(str[cnt] == '0')
                {
                    cnt++;
                }
                else
                    str2[i] = '0';
            }
        }

        str2[i] = '\0';

        printf("Case #%d: %s %s\n", cn++, str1, str2);


    }
    return 0;
}

