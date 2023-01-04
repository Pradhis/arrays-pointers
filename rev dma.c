#include<stdio.h>
#include<stdlib.h>
int main()
{
      int *a,n,i;
      printf("Tell how many numbers to enter : ");
      scanf("%d",&n);
      a=(int*)malloc(n * sizeof(int));
      printf("\nEnter %d num:\n\n",n);
      for(i=0;i<n;i++)
      {
            scanf("%d",a+i);
      }
      printf("\nReverse Order is: \n\n");
      for(i=n-1;i>=0;i--)
      {
            printf(" %d",*(a+i));
      }
      return 0;
}

