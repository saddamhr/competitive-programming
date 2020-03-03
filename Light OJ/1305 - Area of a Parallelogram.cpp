#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int tc, cn = 1, Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, x, y;

    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%d%d%d%d%d%d", &Ax, &Ay, &Bx, &By, &Cx, &Cy);

        Dx = (Cx - Bx) + Ax;
        Dy = (Cy - By) + Ay;

        x = (Ax * By) + (Bx * Cy) +(Cx * Dy) + (Dx * Ay);
        y = (Bx * Ay) + (Cx * By) + (Dx * Cy) + (Ax * Dy);

        int ans;
        ans = 0.5*abs(x-y);

        printf("Case %d: %d %d %d\n",cn++,Dx,Dy,ans);
    }


    return 0;
}
