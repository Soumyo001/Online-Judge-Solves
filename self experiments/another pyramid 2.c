#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,j,n,z=0,k=2,m,l=0;
    scanf("%d",&n);
    m=n-2;
    for(i=1;i<=2*n-1;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(i<=n){
        if(j>=i&&j<=2*n-(1+z)){
                if(j>n)
                {
                    printf("%d",j-k-z);
                    k+=2;
                }
                else
                    printf("%d",j-z);
        }
        else
            printf(" ");
        }
        else
        {
            if(j>=(i-k)&&j<=i)
            {
                if(j<=n)
                    printf("%d",j-m);
                else
                {
                    printf("%d",j-l-z);
                    l+=2;
                }
            }
          else
            printf(" ");
        }
        }
        if(i>n)
           {
              z--;
              k+=2;
              m--;
           }
        else
        {
           z++;
           k=2;
        }
        l=0;
        printf("\n");
    }
}