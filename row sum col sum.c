#include<stdio.h>
int main()
{
    int a[5][5],sum=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Row total:");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            sum+=a[i][j];
        }
        printf("%d",sum);
        sum=0;
    }
    printf("\nColumn total:");
    for(int j=0;j<5;j++)
    {
        for(int i=0;i<5;i++)
        {
            sum+=a[i][j];
        }
        printf("%d",sum);
        sum=0;
    }

}
