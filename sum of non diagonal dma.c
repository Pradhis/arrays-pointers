#include<stdio.h>
#include<stdlib.h>
int main()
{
      int **a, row,col,i,j,s=0;
      printf("Enter  no of rows : ");
      scanf("%d",&row);
      printf("\nEnter no of columns : ");
      scanf("%d",&col);
      a=(int **)malloc(row*sizeof(int*));
      for(i=0;i<row;i++)
      {
            a[i]=(int *)malloc(col*sizeof(int));
      }
      printf("\nEnter Elements matrix of Size %d*%d:\n\n",row,col);
      for(i=0;i<row;i++)
      {
            for(j=0;j<col;j++)
            {
                  scanf("%d",&a[i][j]);
            }
      }
      printf("\n%d*%d Matrix : \n\n",row,col);
      for(i=0;i<row;i++)
      {
            for(j=0;j<col;j++)
            {
                  printf("%3d ",a[i][j]);
            }
            printf("\n");
      }
      printf("\nNon-Diagonal Elements is : ");
      for(i=0;i<row;i++)
      {
            for(j=0;j<col;j++)
            {
                  if(i!=j)
                  {
                        printf("%d ",a[i][j]);
                        s=s+a[i][j];
                  }
            }
      }
      printf("\n\nSum of Non-Diagonal Elements in Matrix = %d",s);
      return 0;
}
