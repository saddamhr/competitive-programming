#include<stdio.h>

int main()
{
    int n, arr[210], i, flag = 0;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] == 1)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        printf("HARD\n");
    else
        printf("EASY\n");

    return 0;
}
