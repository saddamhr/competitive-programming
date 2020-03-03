#include<stdio.h>

int lenearSearch(int A[], int n, int x)
{
    int i;

    for(i=0;i<n;i++)
    {
        if(A[i] == x)
            return i;
    }
    return -1;
}


int main()
{
    int i, A[1000], n, x, a;

    scanf("%d %d", &n, &x);

    for(i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }

    printf("%d\n", lenearSearch(A, n, x));


    return 0;
}
