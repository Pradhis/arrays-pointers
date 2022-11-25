#include<stdio.h>
#define N 50
int main()
{
    int a[N][N], b[N][N], product[N][N];
    int arow,acol,brow,bcol;
    int i,j,k;
    int sum=0;
    printf("Enter number of rows and columns of matrix a:");
    scanf("%d %d",&arow,&acol);
    printf("enter matrix a:\n");
    for(i=0;i<arow;i++)
    {
        for(j=0;j<acol;j++)
        {
            scanf("%d",a[i][j]);
        }
    }
    printf("Enter number of rows and columns of matrix b:");
    scanf("%d %d",&brow,&bcol);
    if(brow!=acol)
    {
        printf("cannot multiply");
    }
    else
    {
        printf("enter matrix b:\n");
        for(i=0;i<brow;i++)
            {
                for(j=0;j<bcol;j++)
                {
                    scanf("%d",b[i][j]);
                }
            }
            for(i=0;i<arow;i++)
            {
                for(j=0;j<bcol;j++)
                    {
                        for(k=0;k<brow;k++)
                        {
                            sum+=a[i][k]*b[k][i];
                        }
                        product[i][j]=sum;
                        sum=0;
                    }
            }
            printf("Product matrix:");
            for(i=0;i<arow;i++)
            {
                for(j=0;j<bcol;j++)
                {
                    printf("%d",product[i][j]);
                }
                printf("\n");
            }
    }
}
