#include<stdio.h>

void bubbleSort(int A[], int n)
{
    int i, j, temp;

    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n-i-1;j++)
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main()
{
    int A[100], n, i, a;

    scanf("%d", &n);
    for(i = 0;i < n;i++)
        scanf("%d", &A[i]);

    bubbleSort(A, n);

    for(i = 0;i < n;i++)
        printf("%d ", A[i]);

    return 0;
}
