#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <sstream>
#include <queue>
#include <bitset>

using namespace std;

#define deb(a)    cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;
#define pb push_back
#define OO 2e9+10

typedef long long ll;
typedef pair<int,int>pii;

template<class T> T abs(T x){
    if(x<0) return -x;
    return x;
}
template<class T>T sqr(T a){
    return a*a;
}

const double pi = acos(-1.0);
const double eps = 1e-8;

typedef long long ll;
typedef char c;
typedef int in;


c str[110], str1[110], str2[110], str3[110];
in tc, cn = 1, i, ind, cnt, l;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    scanf("%d", &tc);
    while(tc--)
    {
        cnt = 0;
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

        for(i=0; i<l; i++)
        {
            if(str[i] == '4')
            {
                str2[i] = '1';
            }
            else
            {
                str2[i] = '0';
            }
            //printf("%c ", str2[i]);
        }

        str2[i] = '\0';

        ind = -1;
        for(i=0; i<l; i++)
        {
            if(str2[i] == '0')
            {
                ind = i;
            }
            else
            {
                break;
            }
        }
        cnt = 0;
        for(i = ind + 1; i<l; i++)
        {
            str3[cnt] = str2[i];
            cnt++;
        }
        str3[cnt] = '\0';
        printf("Case #%d: %s %s\n", cn++, str1, str3);


    }
    return 0;
}
