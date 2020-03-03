#include <bits/stdc++.h>
using namespace std;

#define OO 2e9+10

typedef long long ll;

template<class T> T abs(T x){
    if(x<0) return -x;
    return x;
}
template<class T>T sqr(T a){
    return a*a;
}

const double pi = acos(-1.0);


int main()
{
    char a[100], caseNumber = 1;;

    while(1==scanf("%s", a))
    {
        if(strcmp(a,"*") == 0)
            break;
        else if(strcmp(a,"Hajj") == 0)
            printf("Case %d: Hajj-e-Akbar\n", caseNumber++);
        else if(strcmp(a,"Umrah") == 0)
            printf("Case %d: Hajj-e-Asghar\n", caseNumber++);
    }

    return 0;
}


