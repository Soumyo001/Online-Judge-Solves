#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
            printf(" ");

        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i || i==n)
            printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

}
