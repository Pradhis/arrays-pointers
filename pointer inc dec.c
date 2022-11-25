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
    int *p=&a[0];
    printf("%d",*(p++));
    printf("%d",*(++p));
    printf("%d",*(p--));
    printf("%d",--p);
    return 0;
}
