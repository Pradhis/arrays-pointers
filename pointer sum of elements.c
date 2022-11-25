#include<stdio.h>
#define N 5
int main()
{
    int a[N],i;
    printf("Enter an array elements\n");
    for(i = 0; i < N; i++)
        {
      scanf("%d", &a[i]);
    }
    int sum=0;
    int *p;
    for(p=&a[0];p<=&a[N-1];p++)
    {
        sum+=*p;
        printf("sum is %d",sum);
    }
}
