#include<stdio.h>
#include<limits.h>
#define N 10

int main()
{
  int a[N];
  printf("Enter elements: ");
  for(int i=0; i<N; i++){
    scanf("%d",&a[i]);
  }
  int max = INT_MIN;
  int secondmax = INT_MIN;
  for(int i=0; i<N; i++)
    {
    if(a[i]>max){
      secondmax = max;
      max = a[i];
    }
  else if(a[i]<max && a[i]>secondmax)
    {
      secondmax = a[i];
    }
  }
  printf("Second largest %d",secondmax);

  return 0;
}
