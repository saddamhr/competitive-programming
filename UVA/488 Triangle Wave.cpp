#include<stdio.h>

int main()
{
    freopen("in.txt","r",stdin);

    int testCase, amplitude, frequency, i, j,ks=1;

    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d%d",&amplitude,&frequency);
        if(ks!=1)
            printf("\n");
        ks++;

        for(int k=1;k<=frequency;k++)
        {
            if(k!=1)
                printf("\n");
            for(i=1;i<=amplitude;i++)
            {
                for(j=1;j<=i;j++)
                    printf("%d",i);
                printf("\n");
            }

            for(i=amplitude-1;i>=1; i--)
            {
                for(j=1;j<=i;j++)
                    printf("%d",i);
                printf("\n");
            }
        }
    }

    return 0;
}
