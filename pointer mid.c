#include<stdio.h>
#define N 10
int main()
{
    int a[N],i;
    printf("Enter an array elements\n");
    for(i = 0; i < N; i++)
        {
      scanf("%d", &a[i]);
    }
    int n=sizeof(a)/sizeof(a[0]);
    int *mid=Mid(a,n);
    printf("%d",*mid);
    return 0;
}
int *Mid(int a[N],int n)
{
    return &a[n/2];
}
