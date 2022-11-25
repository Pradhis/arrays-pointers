#include <stdio.h>
#include <limits.h>
#define N 10

int main() {

   int a[N],i;
   printf("Enter an array elements\n");
   for(i = 0; i < N; i++)
    {
      scanf("%d", &a[i]);
   }
   int smallest = INT_MAX;
   int secondSmallest = INT_MAX;
   for(i = 0; i < N; i++)
    {
     if(a[i] < smallest) {
         secondSmallest = smallest;
         smallest = a[i];
     }

     if(a[i] > smallest && a[i] < secondSmallest) {
         secondSmallest = a[i];
     }
  }

  printf("Second smallest %d", secondSmallest);

  return 0;
}
