#include <bits/stdc++.h>
using namespace std;

bool check(char ch)
{
    if(ch == 'a' or ch == 'e' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u')
    {
        return true;
    }
    return false;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    char s1[1010], s2[1010], s;
    int l, cnt, i, v1, v2, c1, c2, l1, l2;

    while(2 == scanf("%s%s", s1, s2))
    {
        bool ans = true;
        if(strlen(s1) != strlen(s2))
            ans = false;
        for(i=0;i<strlen(s1);i++)
        {
            if(check(s1[i]) != check(s2[i]))
                ans = false;
        }
        if(ans == true)
            printf("Yes\n");
        else
            printf("No\n");

    }

    return 0;
}
