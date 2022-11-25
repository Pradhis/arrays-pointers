#include <stdio.h>
#define N 10
int main()
{
    int a[N];
    int sum = 0;
    printf("Enter elements: ");
    for(int i=0; i<N; i++)
    {
    scanf("%d",&a[i]);
    }
    int len = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i < len; i++)
        sum = sum +a[i];

    printf("Sum: %d",sum);
}
