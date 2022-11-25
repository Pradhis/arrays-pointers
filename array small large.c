#include <stdio.h>
#define N 5

int main()
{
    int a[N],i=0;
    int small= a[0];
    int large= a[0];
    int len = sizeof(a)/sizeof(a[0]);
    for(i=0;i<N;i++)
    {
        printf("Enter index:");
        scanf("%d",&a[i]);
    }
    for(i =0; i<len; i++)
    {
        if(a[i]<small)
            small = a[i];
        if(a[i]>large)
            large = a[i];

    }
    printf("Smallest element: %d\n", small);
    printf("Largest element: %d", large);
    return 0;
}
